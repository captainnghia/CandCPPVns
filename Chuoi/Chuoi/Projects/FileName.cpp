#include <stdio.h>
#include <conio.h>

int main() {
	float diem;
	printf("\nNhap vao diem cua ban: ");
	scanf_s("%f", &diem);

	while (getchar() != '\n'); // Xóa bộ đệm nhập
	//fflush(stdin);// xoa trong bo nho dem

	char ten[50];
	printf("\nNhap vao ten cua ban: ");
	//scanf_s("%s", ten);
	// gets bị lọại bỏ từ c11
	// nhap chuoi thi nen dung gets con xuat thi dung printf
	fgets(ten, sizeof(ten) , stdin);

	printf("\nChao ban: %s %f, hom nay ban khoe khong ?", ten, diem);

	_getch();
	return 0;
}