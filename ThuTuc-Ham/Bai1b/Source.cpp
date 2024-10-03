#include <stdio.h>
#include <conio.h>
#include <math.h>
void NhapDuLieu(double &x ){
	printf("\nNhap vao so:");
	scanf_s("%lf", &x);
}
void giaiPTB1(double a, double b) {
	if (a == 0) {
		if (b == 0) {
			printf("\nPhuong trinh co vo so nghiem ");
		}
		else {
			printf("\nPhuong trinh vo nghiem ");
		}
	}
	else {
		double x = -b / a;
		printf("\nPhuong trinh co nghiem la x = %lf ", x);
	}
}
void giaiPTB2(double a, double b, double c) {
	// Th1: a ==0
	if (a == 0) {
		giaiPTB1(b, c);// b chính là cái a ở hàm trên . c là cái a ở hàm trên 
	}
	else {
		double denTa = b * b - 4 * a * c;
		if (denTa < 0) {
			printf("\nPhuong trinh vo nghiem ");
		}
		else if (denTa == 0) {
			double x = -b / (2 * a);
			printf("\nPhuong trinh co nghiem kep la x1 = x2 = %lf", x);
		}
		else {
			double x1 = (-b + sqrt(denTa)) / (2 * a);
			double x2 = (-b - sqrt(denTa)) / (2 * a);
			printf("\nPhuong trinh co 2 nghiem phan biet la \x1 = %lf va \x2 = %lf", x1, x2);
			
		}

	}
}
int main() {
	double a, b,c ;
	NhapDuLieu(a);
	NhapDuLieu(b);
	NhapDuLieu(c);
	/*giaiPTB1(a, b);*/
	giaiPTB2(a, b, c);
	_getch;
	return 0;
}