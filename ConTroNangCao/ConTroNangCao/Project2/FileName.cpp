#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int TinhTong(int a, int b) {
	return a + b;
}

int TinhHieu(int a, int b) {
	return a - b;
}

int TinhTich(int a, int b) {
	return a * b;
}

int TinhThuong(int a, int b) {
	return a / b;
}

int main() {

	int a = 5, b = 6;

	// Tao con tro ham 
	int (*Pointer)(int, int);
	// Tro toi ham tinh tong
	Pointer = TinhTong;
	// Lay ket qua xuat ra man hinh
	int Kq = TinhTong(a, b);
	printf("\nTong la:%d", Kq);

	Pointer = TinhHieu;
	Kq = TinhHieu(a, b);
	printf("\nTinhHieu la:%d", Kq);

	Pointer = TinhTich;
	Kq = TinhTich(a, b);
	printf("\nTinhTich la:%d", Kq);

	Pointer = TinhThuong;
	Kq = TinhThuong(a, b);
	printf("\nTinhThuong la:%d", Kq);



	_getch();
	return 0;
}