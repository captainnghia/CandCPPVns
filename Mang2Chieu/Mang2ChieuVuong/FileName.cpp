#include <stdio.h>
#include <conio.h>
#include <math.h>
#define MAX 100 

// n tuong trung cho so dong va so cot
void NhapMaTran(int a[][MAX], int n) {
	/*for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			printf("\nNhap vao a[%d][%d] = ", i, j);
			scanf_s("%d", &a[i][j]);
		}
	}*/

	for (int i = 0; i < n * n; i++) {
		printf("\nNhap vap a[%d][%d] = ", i / n, i % n);
		scanf_s("%d", &a[i / n][i % n]);
	}
}

void XuatMaTran(int a[][MAX], int n) {
	/*for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			printf("%4d", a[i][j]);
		}
		printf("\n");
	}*/

	for (int i = 0; i < n * n; i++) {
		printf("%4d", a[i / n][i % n]);
		if ((i + 1) % n == 0) {// n chinh la so cot
			printf("\n");
		}

	}

}
int TingTongDong(int a[][MAX], int chisodong, int n) {
	int Tong = 0;
	// Cho chay tu dau toi cuoi cac cot
	for (int i = 0; i < n; i++) {
		Tong += a[chisodong][i];// i la chi so cot 
	}
	return Tong;
}
int TingTichCot(int a[][MAX], int chisocot, int n) {
	int Tich = 1;
	// Cho chay tu dau toi cuoi cac dong
	for (int i = 0; i < n; i++) {
		Tich *= a[i][chisocot];// i la chi so cot 
	}
	return Tich;
}
void TinhTongTungDong(int a[][MAX], int n) {
	//	Cho vong lap duyet qua cac dong 
	/*for (int i = 0; i < n; i++) {
		int Tong = TingTongDong(a, i, n);
		printf("\nTong dong %d la: %d", i, Tong);

	}*/

	// Cach 2 lam truc tiep 
	for (int i = 0; i < n; i++) {
		int Tong = 0;
		for (int j = 0; j < n; j++) {
			Tong += a[i][j];

		}
		printf("\nTong dong %d = %d", i, Tong);
	}
}

void TinhTichTungCot(int a[][MAX], int n) {
	/*for (int i = 0; i < n; i++) {
		int Tich = TingTichCot(a, i, n);
			printf("\nTich cua cot %d la %d", i, Tich);

	}*/

	// Cach 2
	for (int i = 0; i < n; i++) {
		int Tich = 1;
		for (int j = 0; j < n; j++) {// duyet qua tung cot 
			Tich *= a[i][j];
			printf("\nTich cua cot %d la %d", i, Tich);
		}
		/*printf("\nTich cua cot %d la %d", i, Tich);*/
	}
}

void LietKeTinhTongCheoChinh(int a[][MAX], int n) {
	int Tong = 0;
	printf("\nCac phan tu nam tren duong cheo chinh la: ");
	for (int i = 0; i < n; i++) {
		printf("%4d", a[i][i]);
		Tong += a[i][i];
	}
	printf("\nTong cac phan tu nam tren duong cheo chinh = %d", Tong);
}

void LietKeTimMinMaxCheoPhu(int a[][MAX], int n) {
	int Min, Max;
	Min = Max = a[0][n - 1];
	printf("\nDuong cheo phu la %4d", a[0][n - 1]);

	for (int i = 1; i < n; i++) {
		printf("%4d", a[i][n - 1 - i]);
		Max = a[i][n - 1 - i] > Max ? a[i][n - 1 - i] : Max;
		Min = a[i][n - 1 - i] < Min ? a[i][n - 1 - i] : Min;
	}
	printf("\nMin = %d & Max = %d", Min, Max);
}

void LietKeDemSoChanTamGiacTrenCheoChinh(int a[][MAX], int n) {
	printf("\nCac phan tu tren cheo chinh la: ");
	int dem = 0;
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {	
			printf("%4d", a[i][j]);
			if (a[i][j] % 2 == 0) {
				dem++;
			}
		}
	}
	if (dem == 0) {
		printf("\nKhong co so chan ");
	}
	else {
		printf("\nCo %d so chan ", dem);
	}
}

void LietKeVaTimXTrongTamGiacDuoiCheoChinh(int a[][MAX], int n, int x) {
	int Check = 0;
	printf("\nCac phan tu duoi cheo chinh la: ");
	for (int i = 1; i < n; i++) {
		for (int j = 0; j < i; j++) {
			printf("%4d", a[i][j]);
			if (x == a[i][j]) {
				Check = 1;
			}
		}
	}
	if (Check == 0) {
		printf("\nKhong tim thay x ");
	}
	else {
		printf("\nCo tim thay x ");
	}
}
int main() {

	int a[MAX][MAX], n;
	do {

		printf("\nNhap vao n = ");
		scanf_s("%d", &n);
		if (n < 1 || n > 100) {
			printf("\nGia tri khong hop le nhap lai");
		}

	} while (n < 1 || n > 100);
	NhapMaTran(a, n);
	XuatMaTran(a, n);

	//int i = 0;
	//int Tong = TingTongDong(a, i, n);
	//int Tich = TingTichCot(a, i, n);

	//printf("\nTong dong %d la: %d", i, Tong);
	//printf("\nTich cot %d la: %d", i, Tich);

	TinhTongTungDong(a, n);
	TinhTichTungCot(a, n);

	LietKeTinhTongCheoChinh(a, n);

	LietKeTimMinMaxCheoPhu(a, n);

	LietKeDemSoChanTamGiacTrenCheoChinh(a, n);

	int x = 5;
	LietKeVaTimXTrongTamGiacDuoiCheoChinh(a, n, x);
	_getch();
	return 0;
}