#include <stdio.h>
#include <conio.h>
#include <math.h>
void LoiChao() {
	printf("\nHom nay la ngay thu 12 roi nhe !");
}
void XuatTong(int a, int b) {
	int Tong = a + b;
	printf("\n%d + %d = %d ", a, b, Tong);
}
int TinhTong(int a, int b) {
	return a + b;
}
int demSoChuSo(int n) {
	return log10((double)n) + 1;
}
int main() {
	LoiChao();
	int a, b;
	
	printf("\nNhap a:");
	scanf_s("%d", &a);
	printf("\nNhap b:");
	scanf_s("%d", &b);
	//XuatTong(a, b);
	int Tong = TinhTong(a, b);
	// nhận = trả về 
	printf("\nTong la:%d", Tong);
	int n = 12345;
	int soChuSo = demSoChuSo(n);
	// hàm main sẽ nhận 1 cái biến có kết quả trả về 
	// nhớ nhé 
	printf("\nSo chu so la %d", soChuSo);
	_getch;
	return 0;
}