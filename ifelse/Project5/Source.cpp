#include <stdio.h>
#include <conio.h>
#include <math.h>
int main() {

	// giải phương trình bậc 2 .
	float a, b, c;
	printf("\nMoi nhap a:");
	scanf_s("%f", &a);
	printf("\nMoi nhap b:");
	scanf_s("%f", &b);
	printf("\nMoi nhap c:");
	scanf_s("%f", &c);
	// th1: pt có dạng ax + b = 0
	if (a == 0) {
		if (b == 0) {

			if (c == 0) {
				printf("\nPhuong trinh co vo so nghiem");
			}
			else {
				printf("\nPhuong trinh vo nghiem");
			}
		}
		else {
		float	x = -c / b;
		printf("\nPhuong trinh co nghiem duy nhat la x = %f ", x);
		}
		
	}
	else {
		float DenTa = b * b - 4 * a * c;
		if (DenTa > 0) {
			float x1 = (-b + sqrt(DenTa)) / (2 * a);
			float x2 = (-b - sqrt(DenTa)) / (2 * a);
			printf("\nPhuong trinh co 2 nghiem phan biet la x1 = %f \nx2 = %f ", x1, x2);

		}
		else if(DenTa == 0) {
			float x = -b / (2 * a);
			printf("\nPhuong trinh co nghiem kep la %f ", x);
		}
		else {
			printf("\nPhuong trinh vo nghiem ");
		}
	}


	_getch;
	return 0;
}