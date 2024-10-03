#include <stdio.h>
#include <conio.h>
#define max 100
void NhapMang(int a[], int n) {
	for (int i = 0; i < n; i++) {
		printf("\nNhap vao a[%d]:", i );
		scanf_s("%d", &a[i]);
	}
}
void XuatMang(int a[], int n) {
	for (int i = 0; i < n; i++) {
		printf("%4d", a[i]);
		
	}
}
int main() {
	int a[max];
	int n; // số lượng phần tử của mảng 
	do {
		printf("\nNhap vao so luong phan tu cua mang:");
		scanf_s("%d", &n);
		if (n < 0 || n > max) {
			printf("\nLoi!");
		}
	} while (n < 0 || n > max);

	NhapMang(a, n);
	XuatMang(a, n);

	_getch();
	return 0;
}
