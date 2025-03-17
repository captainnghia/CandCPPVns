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


	_getch();
	return 0;
}