#include <stdio.h>
#include <conio.h>
#define PI  3.14
// cai nay la hang so co dinh 
int main() {
	float bankinh, chuvi, dientich;
	printf("Nhap vao ban kinh:");
	scanf_s("%f", &bankinh);
	chuvi = PI * 2 * bankinh;
	dientich = bankinh * bankinh * PI;
	printf("\nchu vi = %f", chuvi);
	printf("\ndientich = %f", dientich);



	_getch;
	return 0;
}