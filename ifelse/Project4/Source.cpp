#include <stdio.h>
#include <conio.h>
int main() {
	// khai báo các biến 
	int a, b, c, d;
	printf("\nMoi nhap a:");
	scanf_s("%d", &a);
	printf("\nMoi nhap b :");
	scanf_s("%d", &b);
	printf("\nMoi nhap c:");
	scanf_s("%d", &c);
	printf("\nMoi nhap d: ");
	scanf_s("%d", &d);
	int Min, Max;
	//c1:
	//// gán mặc định để so sánh 
	//Min = Max = a;
	//// lấy 1 cái trug gian để so sánh 
	//// Tìm min 
	//if (Min > b) {
	//	Min = b;// cập nhật min là b 
	//}
	//if (Min > c) {
	//	Min = c;// cập nhật min là c 
	//}
	//if (Min > d) {
	//	Min = d;// cập nhật min là d 
	//}
	//if (Max < b) {
	//	Max = b;
	//}
	//if (Max < c) {
	//	Max = c;
	//}
	//if (Max < d) {
	//	Max = d;
	//}

	/*c2: dùng toán tử 3 ngôi */
	Min = a < b ? a : b;
	Min = Min < c ? Min : c;
	Min = Min < d ? Min : d;
	//tìm max 
	Max = a > b ? a : b;
	Max = Max > c ? Max : c;
	Max = Max > d ? Max : d;

	printf("\nMin là %d", Min);
	printf("\nMax là %d", Max);



	_getch;
	return 0;

}
