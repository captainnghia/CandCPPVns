#include <stdio.h>
#include <conio.h>
#include <stdlib.h>


void NhapMang(int* a, int n) {
	for (int i = 0; i < n; i++) {
		printf("\nNhap vao a[%d] = ", i);
		scanf_s("%d", a + i);
	}
}

void XuatMang(int* a, int n) {
	for (int i = 0; i < n; i++) {
		printf("%4d", *(a + i));
	}
}

void HoanVi(int& a, int& b) {
	a = a + b;
	b = a - b;
	a = a - b;
}

void SapXep(int* a, int n, bool (*SoSanh)(int, int)) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (SoSanh(a[i], a[j])) {
				HoanVi(a[i], a[j]);
			}
		}
	}
}
bool LonHon(int a, int b) {
	return a > b;
}
bool NhoHon(int a, int b) {
	return a < b;
}

int TimPhanTuThoaYeuCau(int* a, int n, bool(*SoSanh)(int, int)) {
	int x = a[0];
	for (int i = 1; i < n; i++) {
		if (SoSanh(a[i], x) == true) {
			x = a[i];
		}
	}
	return x;
}


int main() {
	int n = 5;

	int* a = (int*)malloc(n * sizeof(int));

	NhapMang(a, n);
	XuatMang(a, n);
	
	printf("\nMang sap xep tang dan la:");
	SapXep(a, n, LonHon);

	XuatMang(a, n);

	printf("\nMang sap xep giam dan la:");
	SapXep(a, n, NhoHon);

	XuatMang(a, n);

	int Max = TimPhanTuThoaYeuCau(a, n, LonHon);
	printf("\nMax la: %d", Max);

	int Min = TimPhanTuThoaYeuCau(a, n, NhoHon);
	printf("\nMin la: %d", Min);


	_getch();
	return 0;
}