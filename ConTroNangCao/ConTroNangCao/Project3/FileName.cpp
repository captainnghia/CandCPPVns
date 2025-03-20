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

// Tra ve 1 con tro ham 
int(*TinhToan(char pheptoan))(int, int) {
	if (pheptoan == '+') {
		return TinhTong;
	}
	else if (pheptoan == '-') {
		return TinhHieu;
	}
	else if (pheptoan == '*') {
		return TinhTich;
	}
	return TinhThuong;
}
int main() {

	int Kq;
	int a = 10, b = 20;
	// Tao 1 con tro ham de nhan 1 con tro ham tra ve

	int (*Pointer)(int, int);

	Pointer = TinhToan('+');

	Kq = Pointer(a, b);

	printf("\n Tong la %d", Kq);


	_getch();
	return 0;
}