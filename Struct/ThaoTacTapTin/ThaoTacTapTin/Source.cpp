#include <stdio.h>
#include <conio.h>

int main() {
	// B1: mo file 
	FILE* FileIn;// Khai bao con trro file 
	errno_t err = fopen_s(&FileIn, "INPUT.TXT", "r"); // ✅ Đúng cú pháp

	if (err != 0 || FileIn == NULL) {
		printf("Lỗi: Không thể mở file!\n");
		return 1;
	}

	// B2 : doc du lieu tu tap tin vao chuong trinh <=> nhap du lieu tu ban phim 

	int a, b;
	fscanf_s(FileIn, "%d%d", &a, &b); // Đọc dữ liệu từ file

	fclose(FileIn); // Đóng file

	printf("\n a = %d & b = %d", a, b);

	_getch();
	return 0;
}