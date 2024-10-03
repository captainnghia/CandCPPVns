#include <stdio.h>
#include <conio.h>
#define max 100
void NhapMang(int a[max], int &n) {
	/// nhap mang 
	for (int i = 0; i < n; i++) {
		printf("\nNhap vao a[%d]", i);
		scanf_s("%d", &a[i]);
	}
}
void XuatMang(int a[max], int n) {
	/// xuat mang 
	printf("Mang la:");
	for (int i = 0; i < n; i++) {
		printf("%3d", a[i]);

	}
	
}
int main() {

	int a[max];// khai báo mảng có tối đa 100 phần tử 
	int n;// số lượng phần tử của mảng 
	// nhap so phan tu 
	int b[max];
	int m;
	do {
		printf("\nNhap vao so luong cua mang:");
		scanf_s("%d", &n);
		if (n < 0 || n > max) {
			printf("\nSo luong phan tu khong hop le. Xin kiem tra lai!");
		}
	} while (n < 0 || n > max);
	/// nhap mang 
	/*for (int i = 0; i < n; i++) {
		printf("\nNhap vao a[%d]", i);
		scanf_s("%d", &a[i]);
	}*/
	/// xuat mang 
	/*printf("Mang la:");
	for (int i = 0; i < n; i++) {
		printf("%3d", a[i]);
		
	}*/
	NhapMang(a, n);
	XuatMang(a, n);

	
	NhapMang(b, m);

	_getch();
	return 0;
}