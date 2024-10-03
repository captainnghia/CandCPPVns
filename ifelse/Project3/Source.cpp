#include <stdio.h>
#include <conio.h>
int main() {
	float  a, b, c;
	printf("\nNhap canh 1: ");
	scanf_s("%f", &a);
	printf("\nNhap canh 2: ");
	scanf_s("%f", &b);
	printf("\nNhap canh 3: ");
	scanf_s("%f", &c);
	/*Th1: là 1 tam giác không  hợp lệ */
	if (a + b <= c && a + c <= b && b + c <= a) {
		printf("\n3 canh khong tao thanh 1 tam giac.");
		_getch;
		return 0;

	}
	/*còn lại là trường hợp hợp lệ */
	/*đưa trường hợp đặc biệt lên hàng đầu 
		1 đều 
		2 vuong can 
		3 vuong 
		4 can 
		5 thuong */
	if (a == b && b == c) {
		printf("\nDay la tam giac deu ");
		_getch;
		return 0;

	}
	// cân 
	if (a == b || a == c || b == c) {
		// vuong 
		if (a* a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == c * c) {
			printf("\nDay la tam giac vuong can ");
			_getch;
			return 0;
		}
		printf("\nDay la tam giac can ");
		_getch;
		return 0;
	}
	if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == c * c) {
		printf("\nDay la tam giac vuong ");
		_getch;
		return 0;
	}
	
		printf("\nDay la tam giac thuong");
		
	

	_getch;
	return 0;
}