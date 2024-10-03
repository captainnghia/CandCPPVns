#include <stdio.h>
#include <conio.h>
#include <math.h>
int main() {
	int x;
	printf("\nNhap x:");
	scanf_s("%d", &x);
	int soLuongChuSo = log10((float)x) + 1;
	if (soLuongChuSo > 9) {
		printf("\nKhong xu li");
	}
	else {
		// xét 3 chữ số 
		if (soLuongChuSo == 3) {
			int temp = x / 100;
			if (temp == 1) {
				printf("Mot tram  ");
			}
			else if (temp == 2) {
				printf("Hai tram ");
			}
			else if (temp == 3) {
				printf("Ba tram ");
			}
			else if (temp == 4) {
				printf("Bon tram ");
			}
			else if (temp == 5) {
				printf("Nam tram ");
			}
			else if (temp == 6) {
				printf("Sau tram ");
			}
			else if (temp == 7) {
				printf("Bay tram ");
			}
			else if (temp == 8) {
				printf("Tam tram ");
			}
			else if (temp == 9) {
				printf("Chin tram ");
			}
			soLuongChuSo--;
			x %= 100;
		}
		// xét hai chữ số 
		if (soLuongChuSo == 2) {
			int temp = x / 10;
			if (temp == 1) {
				printf("Muoi ");
			}
			else if (temp == 2) {
				printf("Hai muoi ");
			}
			else if (temp == 3) {
				printf("Ba muoi ");
			}
			else if (temp == 4) {
				printf("Bon muoi ");
			}
			else if (temp == 5) {
				printf("Nam muoi ");
			}
			else if (temp == 6) {
				printf("Sau muoi ");
			}
			else if (temp == 7) {
				printf("Bay muoi ");
			}
			else if (temp == 8) {
				printf("Tam muoi ");
			}
			else if (temp == 9) {
				printf("Chin muoi ");
			}
			soLuongChuSo--;
			
		}
		// xét một chữ số 
		if (soLuongChuSo == 1) {
			int temp = x % 10;
			if (temp == 1) {
				printf("Mot ");
			}
			else if (temp == 2) {
				printf("Hai ");
			}
			else if (temp == 3) {
				printf("Ba ");
			}
			else if (temp == 4) {
				printf("Bon ");
			}
			else if (temp == 5) {
				printf("Nam ");
			}
			else if (temp == 6) {
				printf("Sau ");
			}
			else if (temp == 7) {
				printf("Bay ");
			}
			else if (temp == 8) {
				printf("Tam ");
			}
			else if (temp == 9) {
				printf("Chin ");
			}
			
		}
	}
	_getch;
	return 0;
}