#include <stdio.h>
#include <conio.h>
int main() {
	float diemtoan, diemly, diemhoa;
	int hesotoan, hesoly, hesohoa;
	float diemtrungbinh;
	printf("\nNhap vao diem toan:");
	scanf_s("%f", &diemtoan);
	printf("\nNhap vao he so toan :");
	scanf_s("%d", &hesotoan);
	printf("\nNhap vao diem ly:");
	scanf_s("%f", &diemly);
	printf("\nNhap vao he so ly :");
	scanf_s("%d", &hesoly);
	printf("\nNhap vao diem hoa:");
	scanf_s("%f", &diemhoa);
	printf("\nNhap vao he so hoa :");
	scanf_s("%d", &hesohoa);

	diemtrungbinh = (diemtoan * hesotoan + diemly * hesoly + diemhoa * hesohoa) / (hesotoan + hesoly + hesohoa);
	printf("\nDiem trung binh = %f", diemtrungbinh);


	_getch;
	return 0;
}