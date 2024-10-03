#include <stdio.h>
#include <conio.h>
int main() {
	/*giải phương trình bậc nhất 2 ẩn nehs */
	float a, b, c, d, e, f;
	printf("\nNhap a: ");
	scanf_s("%f", &a);
	printf("\nNhap b: ");
	scanf_s("%f", &b);
	printf("\nNhap c: ");
	scanf_s("%f", &c);
	printf("\nNhap d: ");
	scanf_s("%f", &d);
	printf("\nNhap e: ");
	scanf_s("%f", &e);
	printf("\nNhap f: ");
	scanf_s("%f", &f);
	// b1 y = (fa -dc) /(ea-db)
	// b2 x = (c - by )/a 
	float x, y;
	if (e* a - d * b != 0 ) {
		y = (f * a - d * c) / (e * a - d * b);
		if (a != 0) {
			x = (c - b * y) / a;
			
		}
		else {
			printf("\nPhuong trinh vo nghiem");
		}
		
	}else{
			printf("\nPhuong trinh vo nghiem ");
	}

	printf("\nPhuong trinh co nghiem la x = %f va y = %f ", x, y);

	_getch;
	return 0;
}