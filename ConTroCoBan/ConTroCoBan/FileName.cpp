#include <stdio.h>
#include <conio.h>

// nguyên tắc sử dụgn con trỏ  2 bên dấu '=' phải cùng khớp nhau tức là: giá tri = giá trị , địa chỉ = đia chỉ 
// 1 con tro sẽ lưu trữ bên trong nó 3 thông tin sau 
//1/ giá trị của con trỏ	
//=> là giá trị ban đầu mà nó nhận được hoặc là gía trị của vùng nhớ mà nó đang trỏ tới 

int main() {

	int a = 5;// a là 1 biến bình thường 
	int *b; // b là con trỏ 

	b = &a; // con trỏ trỏ tới 1 biến bình thường 

	printf("\nGia tri cua a la: %d", a);
	printf("\nDia chi cua a la: %p", &a);

	printf("\nGia tri cua con tro b la: %d", *b);// *b de lay gia tri 
	printf("\nMien gia tri cua con tro b la: %p",b);
	printf("\nDia chi thuc su cua con tro b la: %p", &b);

	//(*b) = 5; // lấy giá trị của con tror tăng lên 5 lần 
	//printf("\na = %d", a);

	int* c;// khai bao con tro c 
	c = b;// con tro tro toi 1 con tro khac

	(*c) = 69;

	printf("\nGia tri cua con tro c la: %d", *c);// *b de lay gia tri 
	printf("\nMien gia tri cua con tro c la: %p", c);
	printf("\nDia chi thuc su cua con tro c la: %p", &c);

	printf("\na = %d", a);
	printf("\n*b = %d", *b);

	int* d;// nam bo vo giua nga 4
	*d = 5;// se bi sai cho d do chua co bo nho cap phat


	_getch();
	return 0;
}