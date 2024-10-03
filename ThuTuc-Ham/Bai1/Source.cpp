#include <stdio.h>
#include <conio.h>
//Viết hàm đổi một ký tự hoa sang ký tự thường.

void Nhap(char &n){
	printf("\nNhap vao :");
	scanf_s("%c", &n);
}
char bienDoi(char x ){// thang nay laf ham co kieu tra ve 
	if (x >= 'A' && x <= 'Z') {
		x += 32;
	}
	return x;// con thang nay la khogn thuoc cai if trong kia se la kis tu thuog dudojc tra ve 
}
int main() {
	char x;
	Nhap(x);
	char c = bienDoi(x);
	printf("\nSau khi bien doi la %c ", c);
	_getch;
	return 0;
}