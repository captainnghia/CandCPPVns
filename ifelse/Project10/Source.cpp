#include <stdio.h>
#include <conio.h>
#include <math.h>
int main() {
	int x;
	printf("\nNhap vao so nguyen duong x:");
	scanf_s("%d", &x);
	if (x >= 0) {
		double kq = sqrt((double)x);
		if (kq == (int)kq) {
			printf("\nLa so chinh phuong ");
		}
		else {
			printf("\nKhong phai la so chinh phuong ");
		}
	}
	else {
		printf("\nKhong hop le em nhé");
	}
	_getch;
	return 0;
}