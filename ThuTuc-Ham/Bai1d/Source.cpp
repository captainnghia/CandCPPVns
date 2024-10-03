#include <stdio.h>
#include <conio.h>
void NhapDuLieu(int &x) {
	printf("\nMoi ban nhap vao so:");
	scanf_s("%d", &x);
}
//int TimMin(int a, int b, int c, int d) {
//	int Min = a;
//	if (b < Min) {
//		Min = b;
//
//	}
//	if (c < Min) {
//		Min = c;
//	}
//	if (d < Min) {
//		Min = d;
//	}
//	return Min;
//	// đây là hàm có kiểu dữ liệu trả về phải có return 
//}
int TimMin(int a, int b) {
	return a < b ? a : b;
}
int main() {
	int a, b, c, d;
	NhapDuLieu(a);
	NhapDuLieu(b);
	NhapDuLieu(c);
	NhapDuLieu(d);

	int Min = TimMin(a, b);
	Min = TimMin(Min, c);
	Min = TimMin(Min, d);
	printf("\nMin = %d", Min);
	_getch;
	return 0;
}