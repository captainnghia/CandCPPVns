#include <stdio.h>
#include <conio.h>
int main() {
	/*4. Tìm ước số chung lớn nhất của 2 số nguyên dương a và b nhập từ bàn phím.*/
	int a, b;
	int soLanLapCach1 = 0;
	int soLanLapCach2 = 0;
	do {
		printf("\nMoi nhap vao so a:");
		scanf_s("%d", &a);
		if (a < 0) {

			printf("\nSo a khong hop le vui long nhap lai.");
		}

	} while (a < 0); // cái này là điều kiện lặp lại 
	do {
		printf("\nMoi nhap voa so b : ");
		scanf_s("%d", &b);
		if (b < 0) {
			printf("\nSo b khog hop le vui log nhap lai.");
		}

	} while (b < 0);
	int Min = a < b ? a : b;
	int Max = a > b ? a : b; 
	int ucln;
	if (Max % Min == 0) {
		ucln = Min;

	}
	else {
		for (int i = Min / 2; i >= 1; i--) {
			soLanLapCach1++;
			if (Max % i == 0 && Min % i == 0) {
				ucln = i;
				break; 

			}
		}
	}
	printf("\nCach 1:Uoc chung lon nhat la :%d ", ucln);
	while (a != b) {// điều kiện ;lặp 
		if (a > b) {
			a = a - b;

		}
		else {
			b = b - a;
		}
		// trường hợp này thì ucln = a hay b cungx dduoc vì nó bằng nhau 
		soLanLapCach2++;
	}
	ucln = a;
	printf("\nCach 2:Uoc chung lon nhat la :%d ", ucln);
	printf("\nSo lan lap cach 1 la:%d ", soLanLapCach1);
	printf("\nSo lan lap cach2 la:%d ", soLanLapCach2);
	_getch; 
		return 0;
}