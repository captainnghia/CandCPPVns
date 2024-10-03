#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
#define max 100
void NhapMang(int a[], int n) {
	for (int i = 0; i < n; i++) {
		printf("\nNhap vao a[%d]:", i);
		scanf_s("%d", &a[i]);
	}
}
void XuatMang(int a[], int n) {
	for (int i = 0; i < n; i++) {
		printf("%4d", a[i]);

	}
}
int KiemTraSoNguyenTo(int x) {
	if (x < 2) {
		return 0;
	}
	else if (x > 2) {
		if (x % 2 == 0) {
			return 0;
		}
		for (int i = 3; i < (int)sqrt(x); i += 2) {
			if (x % i == 0) {
				return 0;
			}
		}
	}
	return 1;// thỏa 
}
void SuaNguyenToThanhSo0(int a[], int n) {
	for (int i = 0; i < n; i++) {
		if (KiemTraSoNguyenTo(a[i]) == 1) {
			a[i] = 0;
		}
	}
}
void ThemPhanTu(int a[], int &n, int vitrithem, int phantuthem) {
	for (int i = n - 1; i >= vitrithem; i--) {
		a[i + 1] = a[i];// lấp đầy khoảng trống 
	}
	a[vitrithem] = phantuthem;
	n++;
}
void XoaPhanTu(int a[], int& n, int vitrixoa) {
	for (int i = vitrixoa + 1; i < n; i++) {
		a[i - 1] = a[i];// lấp đầy khoảng trống 
	}
	n--;// cập nhật lại 
}
void ChenVaoSauSoNguyenTo(int a[], int &n, int socanchen) {
	for (int i = 0; i < n; i++) {
		if (KiemTraSoNguyenTo(a[i]) == 1) {
			ThemPhanTu(a, n, i + 1, socanchen);
			i++;// để không xét lại phần tử vừa thêm 
		}
	}
	//
	
}
void XoaTatCaSoNguyenTo(int a[], int &n) {
	for (int i = 0; i < n; i++) {
		if (KiemTraSoNguyenTo(a[i]) == 1) {
			XoaPhanTu(a, n, i);/// xóa tại vị trí i 
			i--; /// lùi lại cập nhật vị trí 
		}
	}
}
//6. Các thao tác thêm / xóa / sửa
//a.Sửa các số nguyên tố có trong mảng thành
//số 0
//b.Chèn số 0 đằng sau các số nguyên tố
//trong mảng
//c.Xóa tất cả số nguyên tố có trong mảng

int main() {
nghia:
	int a[max];
	int n; // số lượng phần tử của mảng 
	do {
		printf("\nNhap vao so luong phan tu cua mang:");
		scanf_s("%d", &n);
		if (n < 0 || n > max) {
			printf("\nLoi!");
		}
	} while (n < 0 || n > max);

	for (int i = 0; i < n; i++)
	{
		// stdlib.h & time.h
		// srand(time(0));
		// a + rand() % (b - a + 1)

		// random trong đoạn -20 --> 30

		a[i] = -20 + rand() % 51;
	}

	
	XuatMang(a, n);

	/*SuaNguyenToThanhSo0( a, n);
	printf("\nSo nguyen to sau khi sua thanh 0 la:");
	XuatMang(a, n);*/

	//printf("\nMang sau khi chen them so 1 la:");
	//ChenVaoSauSoNguyenTo(a, n, 1);
	//XuatMang(a, n);

	printf("\nMang sau khi xoa tat ca so nguyen to la:");
	XoaTatCaSoNguyenTo(a, n);

	XuatMang(a, n);
	goto nghia;
	_getch();
	return 0;
}