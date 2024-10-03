#include <stdio.h>
#include <conio.h>
int main() {
	
	// khia bao 
	float a, b;
	float Tong, Hieu, Tich, Thuong;
	// nhap thông tin 
	printf("nhap a :");
	scanf_s("%f", &a);
	printf("Nhap b:");
	scanf_s("%f", &b);

	// tinh toan 
	Tong = a + b;
	Hieu = a - b;
	Tich = a * b;
	Thuong = a / b;
	/// b3 in kqra 
	printf("\n%f + %f = %f ", a, b, Tong);
	printf("\n%f - %f = %f ", a, b, Hieu);
	printf("\n%f * %f = %f ", a, b, Tich);
	printf("\n%f / %f = %f ", a, b, Thuong);
	// toan tu 3 ngoi ne ban oi 
	b == 0 ? printf("\n b là khong nen khong the chia dươc") : printf("\n%f / %f = %f ", a, b, Thuong);


	_getch;
	return 0;
}