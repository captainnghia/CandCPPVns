#include <stdio.h>
#include <conio.h>
#include <math.h>
#define MAX 100 

void NhapMang(int a[][MAX], int sodong, int socot) {
	for (int i = 0; i < sodong; i++) {
		for (int j = 0; j < socot; j++) {
			printf("\Nhap vao a[%d][%d] = ", i, j);
			scanf_s("%d", &a[i][j]);
		}
	}
}
void XuatMang(int a[][MAX], int sodong, int socot) {
	for (int i = 0; i < sodong; i++) {
		for (int j = 0; j < socot; j++) {
			printf("\%4d", a[i][j]);

		}
		printf("\n");
	}
}
int TinhTongMang(int a[][MAX], int sodong, int socot) {
	int Tong = 0;

	for (int i = 0; i < sodong; i++) {
		for (int j = 0; j < socot; j++) {
			Tong += a[i][j];
		}
	}
	return Tong;
}

int DemSoLuongChan(int a[][MAX], int sodong, int socot) {
	int dem = 0;
	for (int i = 0; i < sodong; i++) {
		for (int j = 0; j < socot; j++) {
			if (a[i][j] % 2 == 0) {
				dem++;
			}
		}
	}
	return dem;
}

int KiemTraChinhPhuong(int x) {
	if (sqrt((double)x) == (int)sqrt((double)x)) {
		return 1;// la so chinh phuong
	}
	return 0;// khong phai 

	// cach day thi 
	//return sqrt((double)x) == (int)sqrt((double)x) ? 1 : 0;
	// cach vao doi 
	//return sqrt((double)x) == (int)sqrt((double)x);
}

int LietKeChinhPhuong(int a[][MAX], int sodong, int socot) {

	printf("\nCac so chinh phuong la: ");
	for (int i = 0; i < sodong; i++) {
		for (int j = 0; j < socot; j++) {
			if (KiemTraChinhPhuong(a[i][j])) {

				printf("\n%4d", a[i][j]);
			} 
		}
	}
	return 0;

}

int TimKiem(int a[][MAX], int sodong, int socot, int x) {
	for (int i = 0; i < sodong; i ++ ) {
		for (int j = 0; j < socot; j++) {
			if (a[i][j] == x) {
				return i;
			}
		}
	}
	return -1;// khong thay 
}
// phanloai = 2 => tim max va nguoc lai 
int TimMaxMin(int a[][MAX], int sodong, int socot,int phanloai) {
	int Temp = a[0][0];

	for (int i = 0; i < sodong; i++) {
		for (int j = 0; j < socot; j++) {
			if (phanloai == 2) {
				if (a[i][j] >= Temp) {
					Temp = a[i][j];
				}
			}
			else {
				if (a[i][j] < Temp) {
					Temp = a[i][j];
				}
			}
			
		}
	}
	return Temp;
}

void ChuyenMang(int a[][MAX], int sodong, int socot, int b[]) {
	
	int idx = 0;
	for (int i = 0; i < sodong; i++) {
		for (int j = 0; j < socot; j++) {
			b[idx++] = a[i][j];
		}
	}
}

void LietKePhanBiet(int b[], int n) {

	printf("\nCac phan tu phan biet la: ");
	for (int i = 0; i < n; i++) {
		int Check = true;
		for (int j = i - 1; j >= 0; j--) {
			if (b[i] == b[j]) {
				Check = false;
				break;
			}
		}
		if (Check == true) {
			printf("%4d", b[i]);
		}
	}
}

void LietKePhanBietCach2(int a[][MAX], int sodong, int socot) {
	for (int i = 0; i < sodong * socot; i++) {
		printf("%4d", a[i / socot][i % socot]);
	}
}
void LietKePhanBiet_Cach2(int a[][MAX], int sodong, int socot) {

	printf("\nCac phan tu phan biet la: ");
	for (int i = 0; i < sodong * socot; i++) {
		int Check = true;
		for (int j = i - 1; j >= 0; j--) {
			if (a[i / socot][i % socot] == a[j / socot][j % socot]) {
				Check = false;
				break;
			}
		}
		if (Check == true) {
			printf("%4d", a[i / socot][i % socot]);
		}
	}
}

void Hoanvi(int& a, int b) {
	int Temp = a;
	a = b;
	b = Temp;
}

void SapXep(int a[][MAX], int sodong, int socot, char phanloai) {
	for (int i = 0; i < sodong * socot; i++) {
		for (int j = i + 1; j < sodong * socot; j++) {
			if (phanloai == 't') {
				if (a[i / socot][i % socot] > a[j / socot][j % socot]) {
					Hoanvi(a[i / socot][i % socot], a[j / socot][j % socot]);
				}
			}
			else if (phanloai == 'g'){
				if (a[i / socot][i % socot] < a[j / socot][j % socot]) {
					Hoanvi(a[i / socot][i % socot], a[j / socot][j % socot]);
				}
			}
		}
	}
}
int main() {

	int a[MAX][MAX];
	int sodong, socot;

	do {
		printf("\nNhap vao so dong: ");
		scanf_s("%d", &sodong);

		if (sodong < 1 || sodong >100) {
			printf("\nSo dong khong hop le.Vui long kiem tra lai");
		}
	} while (sodong < 1 || sodong >100);

	do {
		printf("\nNhap vao so cot: ");
		scanf_s("%d", &socot);

		if (socot < 1 || socot >100) {
			printf("\nSo cot khong hop le.Vui long kiem tra lai");
		}
	} while (socot < 1 || socot >100);

	NhapMang(a, sodong, socot);
	XuatMang(a, sodong, socot);

	int Tong = TinhTongMang(a, sodong, socot);
	printf("\nTong = %d", Tong);

	int SoChan = DemSoLuongChan(a, sodong, socot);
	printf("\So luong chan la: = %d", SoChan);

	LietKeChinhPhuong(a, sodong, socot);

	int x = 5;
	int kiemtra = TimKiem(a, sodong, socot, x);

	if (kiemtra == -1) {
		printf("\nKhong tim thay");
	}
	else {
		printf("\nTim thay");
	}

	int Max = TimMaxMin(a, sodong, socot,2);
	int Min = TimMaxMin(a, sodong, socot,1);

	printf("\nMax = %d", Max);
	printf("\nMin = %d", Min);

	int b[MAX];
	ChuyenMang(a, sodong, socot, b);
	LietKePhanBiet(b, sodong * socot);

	printf("\nXuat mang 2 chieu bang 1 vong lap:");
	LietKePhanBietCach2(a, sodong, socot);
	LietKePhanBiet_Cach2(a, sodong, socot);
	
	printf("\nSap xep tang dan\n");
	SapXep(a, sodong, socot, 't');
	XuatMang(a, sodong, socot);
	_getch();
	return 0;
}