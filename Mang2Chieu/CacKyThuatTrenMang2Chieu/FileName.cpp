#include <stdio.h>
#include <conio.h>
#include <math.h>
#define MAX 100 

void NhapMang(int a[][MAX], int dong, int cot) {
	for (int i = 0; i < dong; i++) {
		for (int j = 0; j < cot; j++) {
			printf("\nNhap vao a[%d][%d] = ", i, j);
			scanf_s("%d", &a[i][j]);
		}
	}
}
void XuatMang(int a[][MAX], int dong, int cot) {
	for (int i = 0; i < dong; i++) {
		for (int j = 0; j < cot; j++) {
			printf("%4d", a[i][j]);

		}
		printf("\n");
	}
}
int TinhTongSoDuong(int a[][MAX], int dong, int cot) {
	int Tong = 0;
	for (int i = 0; i < dong; i++) {
		for (int j = 0; j < cot; j++) {
			if (a[i][j] > 0) {
				Tong += a[i][j];
			}
		}
	}
	return Tong;
}

int TinhTongBien(int a[][MAX], int dong, int cot) {
	int Tong = 0;
	// duyet qua dong dau va dong cuoi 
	for (int j = 0; j < cot; j++) {
		Tong += a[0][j] + a[dong - 1][j];
		// a[0][j]
		//a[dong -1][j];
	}
	// duyet cot dau va cuoi bo di 2 o dau 
	for (int i = 1; i < dong - 1; i++) {
		//a[i][0]
		//a[i][cot -1]
		Tong += a[i][0] + a[i][cot - 1];

	}
	return Tong;
}

void LietKeSoDuongTrongTungDong(int a[][MAX], int dong, int cot) {
	for (int i = 0; i < dong; i++) {
		int dem = 0;
		for (int j = 0; j < cot; j++) {
			if (a[i][j] >= 0) {
				dem++;
			}
		}
		if (dem != 0) {
			printf("\nDong %d co so luong so duong la %d", i, dem);
		}
		else {
			printf("\nDong %d khong co so luong so duong nao ca", i, dem);
		}
	}
}

// ham truyen vao chi so dong va tim Max tren chi so dong do 
int TimMaxDong(int a[][MAX], int chisodong, int cot, int& vitricot) {
	int Max = a[chisodong][0];
	vitricot = 0;
	for (int i = 1; i < cot; i++) {
		if (a[chisodong][i] > Max) {
			Max = a[chisodong][i];
			vitricot = i;
		}
	}
	return Max;
}
// ham truyen vao chi so cot va tim ra min tren cot do 
int TimMinCot(int a[][MAX], int dong, int chisocot) {
	int Min = a[0][chisocot];
	for (int i = 1; i < dong; i++) {
		if (a[i][chisocot] < Min) {
			Min = a[i][chisocot];
		}
	}
	return Min;
}

void LietKeYenNgua(int a[][MAX], int dong, int cot) {
	printf("\nCac phan tu yen ngua la:");
	for (int i = 0; i < dong; i++) {
		int vitricot;
		int MaxDong = TimMaxDong(a, i, cot, vitricot);
		int MinCot = TimMinCot(a, dong, vitricot);

		if (MaxDong == MinCot) {
			printf("%4d", MaxDong);

		}

	}
}
int KiemTraDongTangDan(int a[][MAX], int chisodong, int cot) {
	for (int j = 1; j < cot; j++) {
		if (a[chisodong][j] < a[chisodong][j - 1]) {
			return 0;// sai 
		}
	}
	return 1;
}
void KiemTraTungDong(int a[][MAX], int dong, int cot) {
	for (int i = 0; i < dong; i++) {
		if (KiemTraDongTangDan(a, i, cot) == 1) {
			printf("\nDong %d tang dan", i);
		}
		else {
			printf("\nDong %d khong tang dan", i);
		}
	}
}
void HoanViPhantTu(int& a, int& b) {
	int Temp = a;
	a = b;
	b = Temp;
}
void HoanviDong(int a[][MAX], int cot, int dong1, int dong2) {
	for (int j = 0; j < cot; j++) {
		HoanViPhantTu(a[dong1][j], a[dong2][j]);
	}
}
void XoaDong(int a[][MAX], int& dong, int cot, int vitridongxoa) {
	for (int i = vitridongxoa; i < dong - 1; i++) {
		HoanviDong(a, cot, i, i + 1);
	}
	dong--;
}
void ThemDong(int a[][MAX], int& dong, int cot, int b[], int vitridongthem) {
	dong++;
	// dau tien them mang b vao cuoi cung cua ma tran 
	for (int j = 0; j < cot; j++) {
		a[dong - 1][j] = b[j]; // them vao cuoi dong 
	}
	for (int i = dong - 1; i > vitridongthem; i--) {
		HoanviDong(a, cot, i, i - 1);
	}
}
void LietKeCheoTrai(int a[][MAX], int dong, int cot, int chisodong, int chisocot) {
	int StartDong = chisodong, StartCot = chisocot;
	while (true) {
		StartDong--;
		StartCot--;
		if (StartDong < 0 || StartCot < 0) {
			StartDong += 1;
			StartCot += 1;
			break;
		}
	}
	printf("\nStart dong = %d", StartDong);
	printf("\nStart cot = %d", StartCot);
}
int main() {

	int a[MAX][MAX], dong, cot;

	do {
		printf("\nNhap vao so dong: ");
		scanf_s("%d", &dong);

		if (dong < 1 || dong > 100) {
			printf("\nSo dong khong hop le vui long kiem tra lai ");
		}
	} while (dong < 1 || dong > 100);

	do {
		printf("\nNhap vao so cot: ");
		scanf_s("%d", &cot);

		if (cot < 1 || cot > 100) {
			printf("\nSo cot khong hop le vui long kiem tra lai ");
		}
	} while (cot < 1 || cot > 100);

	NhapMang(a, dong, cot);
	XuatMang(a, dong, cot);

	int TongDuong = TinhTongSoDuong(a, dong, cot);
	printf("\nTong cac so duong = %d", TongDuong);

	int TongBien = TinhTongBien(a, dong, cot);
	printf("\nTong bien la %d ", TongBien);

	LietKeSoDuongTrongTungDong(a, dong, cot);

	LietKeYenNgua(a, dong, cot);

	KiemTraTungDong(a, dong, cot);

	HoanviDong(a, cot, 0, 2);
	printf("\nMa tran sau khi hoan vi la:\n");
	XuatMang(a, dong, cot);

	XoaDong(a, dong, cot, 0);

	int b[] = { 10,11,12 };
	ThemDong(a, dong, cot, b, 1);
	printf("\nMa tran sau khi them la:\n");
	XuatMang(a, dong, cot);


	_getch();
	return 0;
}