#include <stdio.h>
#include <conio.h>
#include <stdlib.h>// cap phat bo nho cho con tro 


void NhapMang(int* a, int n) {
	for (int i = 0; i < n; i++) {
		printf("\nNhap vao a[%d] = ", i);
		//scanf_s("%d", &a[i]);
		//scanf_s("%d", a + i);// a + i la dia chi 
		scanf_s("%d", a++);
	}
}
void XuatMang(int* a, int n) {
	for (int i = 0; i < n; i++) {
		//printf("%4d", a[i]);
		//printf("%4d", *(a + i));// lay ra gia tri 
		printf("%4d", *(a++));// a++ la dia chi con them * vao la gia tri 
	}
}
int main() {

	int  n;

	do {
		printf("\nNhap vao n = ");
		scanf_s("%d", &n);
		if (n < 0) {
			printf("\nKhong hop le vui long nhap lai");
		}
	} while (n < 0);

	// cap phat con tro mang 
	int* a;// khai bao 

	// cap phat bo nhow 
	//a = (int *)malloc(n * sizeof(int));
	//a = (int*)calloc(n, sizeof(int));
	a = (int*)realloc(NULL, n * sizeof(int));

	NhapMang(a, n);
	XuatMang(a, n);

	// giai phong bo nho
	free(a);

	_getch();
	return 0;
}