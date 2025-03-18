#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void NhapMang(int* a, int n) {
	for (int i = 0; i < n; i++) {
		printf("\nNhap vao a[%d] = ", i);
	/*	scanf_s("%d", &a[i]);
		scanf_s("%d", &i[a]);
		scanf_s("%d", a + i);
		scanf_s("%d", i + a);*/
		scanf_s("%d", a++);
	}
}
void XuatMang(int* a, int n) {
	for (int i = 0; i < n; i++) {
		printf("%4d", a[i]);
	
	}
}
int TinhTong(int* a, int n) {
	int Tong = 0;
	for (int i = 0; i < n; i++) {
		Tong += a[i];
	}
	return Tong;
}
int TimMax(int* a, int n) {
	int Max = a[0];
	for (int i = 0; i < n; i++) {
		if (a[i] < Max) {
			Max = a[i];
		}
	}
	return Max;
}
int TimMin(int* a, int n) {
	int* Min = &a[0];
	for (int i = 0; i < n; i++) {
		if (a[i] < *Min) {
			*Min = a[i];
		}
	}
	return *Min;
}
void HoanVi_1(int& a, int& b) {
	int Temp = a; 
	a = b;
	b = Temp;
}
void HoanVi_2(int* a, int* b) {
	int Temp = *a;
	*a = *b;
	*b = Temp;
}
void SapXepMang(int* a, int n, char phanloai) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (phanloai == 't' || phanloai == 'T') {
				if (a[i] > a[j]) {
					//HoanVi_1(a[i], a[j]);
					HoanVi_2(&a[i], &a[j]);
				}
			}
			else if(phanloai == 'g' || phanloai == 'G'){
				if (a[i] < a[j]) {
					//HoanVi_1(a[i], a[j]);
					HoanVi_2(&a[i], &a[j]);
				}
			}
		}
	}
}
void ThemPhanTu(int *a, int& n, int vitrithem, int phantuthem) {
	realloc(a, (n + 1) * sizeof(int));// cap du ra 1 o 
	for (int i = n - 1; i >= vitrithem; i--) {
		a[i + 1] = a[i];
	}
	a[vitrithem] = phantuthem;
	n++;
}
void XoaPhanTu(int*& a, int& n, int vitrixoa) {
	for (int i = vitrixoa + 1; i < n; i++) {
		a[i - 1] = a[i];
	}
	n--;
	realloc(a, n * sizeof(int));
}

int main() {

	int n;
	do {
		printf("\nNhap vao so luong phan tu n = ");
		scanf_s("%d", &n);
		if (n < 0)
		{
			printf("\nGia tri nhap vao khong hop le. Vui long nhap lai");
		}
	} while (n, 0);
	// cap phat bo nhow
	int* a = (int*)malloc(n * sizeof(int));

	NhapMang(a, n);
	XuatMang(a, n);

	int Min = TimMin(a, n);
	printf("\nMin = %d", Min);

	int Tong = TinhTong(a, n);
	printf("\nTong la %d", Tong);

	SapXepMang(a, n, 't');
	printf("\nXuat ra mang la: ");
	XuatMang(a, n);

	ThemPhanTu(a, n, 1, 20);
	printf("\nXuat ra mang la: ");
	XuatMang(a, n);

	// giai phong bo nho
	free(a);


	_getch();
	return 0;
}