#include <stdio.h>
#include <conio.h>
#include <Windows.h>
// nhap thi ta lam tham chieu vi no se lam thay doi gia tri 
void Nhap(int &n) {
	do {
		printf("\nVui long nhap vao so nguyen duong:");
		scanf_s("\n%d", &n);
		if (n <= 0) {
			printf("\nKhong hop le vui long nhap lai.");
		}
	} while (n <= 0);
}
int TinhGiaiThua(int n) {// vi n khong thay doi nen ta dung tham tri 
	int Tich = 1;
	for (int i = 2; i <= n; i++) {
		Tich *= i;

	}
	return Tich;
}
int main() {
	/*int a, b, c;
	Nhap(a);
	Nhap(b);
	Nhap(c);
	int S = TinhGiaiThua(a) + TinhGiaiThua(b) + TinhGiaiThua(c);
	printf("\nS = a! + b! + c! = %d! + %d! + %d! = %d ", a, b, c, S);*/
	int tong = 0;
	while (true) {
		printf("\   Menu");
		printf("\n1.Nhap ");
		printf("\n2.Thoat");
		int luaChon;
nghiacute:
		printf("\nMoi ban nhap vao lua chon:");
		scanf_s("%d", &luaChon);
		if (luaChon != 1 && luaChon != 2) {
			printf("\nLua chon khong hop le vui long nhap lai");
			goto nghiacute;
		}
		if (luaChon == 1) {
			system("cls");
			int a;
			Nhap(a);
			tong += TinhGiaiThua(a);//co the thay doi gia tri cua thangw nay 
		}
		else {
			
			break;
		}
		printf("\nTong = %d ", tong);
	}
	_getch;
	return 0;
}