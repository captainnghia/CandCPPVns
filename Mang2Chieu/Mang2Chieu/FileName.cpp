#include <stdio.h>
#include <conio.h>
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
int main() {

	// khai bao mang truc tiep 
	/*int a[5] = { 1,2,3,4,5 };
	int b[2][3] = { {1,2,3},{4,5,6} };

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			printf("%4d", b[i][j]);
		}
		printf("\n");
	}*/

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

	NhapMang(a,sodong, socot);
	XuatMang(a,sodong,socot);
	_getch();
	return 0;
}