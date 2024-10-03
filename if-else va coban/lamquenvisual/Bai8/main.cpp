#include <stdio.h>
#include <conio.h>
int main() {
	unsigned int soluong, dongia, tien, thue;
	printf("nhap vao so luong mua:" );
	scanf_s("%u", &soluong);
	printf("nhap vao don gia 1 cai ");
	scanf_s("%u", &dongia);
	tien = soluong * dongia;
	thue = 0.1 * tien;
	// in ra 
	printf("Tien la %u:", tien);
	printf("Thue la %u:", thue);
	// nhap thi khong co % con xuat thi có % nha 


	_getch;
	return 0;
}