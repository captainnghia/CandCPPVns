#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

int KiemTraSoNguyen(char* s) {
	int length = strlen(s);
	for (int i = 0; i < length; i++) {
		if (s[i] < '0' || s[i] > '9') {
			return 0;// sai 
		}
	}
	return 1;
}
int main() {

	int soluong;
nghiadeptrai:
	char chuoi[30];
	printf("\nNhap vao so luong: ");
	//scanf_s("%d", &soluong);
	fgets(chuoi, sizeof(chuoi),stdin);
	// Xóa ký tự xuống dòng '\n' nếu có
	chuoi[strcspn(chuoi, "\n")] = '\0';
	
	int kiemtra = KiemTraSoNguyen(chuoi);
	if (kiemtra == 0) {
		printf("\nLoi kieu du lieu");
		goto nghiadeptrai;
	}
	else {
		soluong = atoi(chuoi);
		printf("\nSo luong = %d", soluong);
	}

	_getch();
	return 0;
}