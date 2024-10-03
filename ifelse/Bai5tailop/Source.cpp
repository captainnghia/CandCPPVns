#include <stdio.h>
#include <conio.h>
#define LCB 650000
int main() {
	int TNCT;
	float heSoLuong;
	printf("\nNhap vao tham nien cong tac");
	scanf_s("%d", &TNCT);
	if (TNCT < 12) {
		heSoLuong = 1.92;

	}
	else if(TNCT >= 12 && TNCT < 36) {
		heSoLuong = 2.34;
	}
	else if (TNCT >= 36 && TNCT < 60) {
		heSoLuong = 3;
	}
	else {
		heSoLuong = 4.5;
	}
	float Luong = heSoLuong * LCB;
	printf("\nLuong la: %f ", Luong);

	_getch;
	return 0;
}