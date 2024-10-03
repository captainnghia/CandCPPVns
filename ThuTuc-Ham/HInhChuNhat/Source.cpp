#include <stdio.h>
#include <conio.h>
#include <math.h>
void VeHCN(int chieuDai , int chieuRong){
	for (int i = 1; i <= chieuRong; i++) {
		for (int j = 1; j <= chieuDai; j++) {
			printf("*");
		}
		printf("\n");
	}
	
}
void VeHCNRong(int chieuDai, int chieuRong) {

	for (int i = 1; i <= chieuRong; i++) {
		if (i == 1 || i == chieuRong) {
			for (int j = 1; j <= chieuDai; j++) {
				printf("*");
			}
		}
		else {
			for (int j = 1; j <= chieuDai; j++) {
				if (j == 1 || j == chieuDai) {
					printf("*");
				}
				else {
					printf("");
				}
		}
		}
		
		printf("\n");
	}

}

void veTamGiacVuongCan(int canh) {
	for (int i = 1; i <= canh; i++) {
		for (int j = 1; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}
}

// hàm trả về số lượng chữ số của số x 
int demSoLuongChuSo(int x) {
	int dem = 0;
	while (x != 0) {
		x /= 10;
		dem++;
	}
	return dem;// tra ve so luong chu so 
}
int chuSoMax(int x) {
	int Max = 0;
	while (x != 0) {
		int chuSo = x % 10;
		x /= 10;
		if (chuSo > Max) {
			Max = chuSo;
		}
	}
	return Max;
}
// ham nay tra ve so sau khi da sap xep tang dan len 
int xuLiDuLieu(int x) {
	int dem = demSoLuongChuSo(x);
	int Min = 9;
	int Temp = x;
	int Sum = 0;
	int dem1 = 0;
	int Min1 = -1;
	int chusoMax = chuSoMax(x);
	while(true) {
		while (Temp != 0) {
			int chuSo = Temp % 10;
			Temp /= 10;
			if (chuSo < Min && Min > Min1) {
				Min = chuSo;
			}
		}
		Sum += Min * pow(10.0, dem1 - 1);
		dem--;
		// kiem tra xem co bao nhieu chu so trung voi bien Min 

		Temp = x;
		int dem2 = 0;
		while (Temp != 0) {
			int chuSo = Temp % 10;
			Temp /= 10;
			if (chuSo == Min) {
				dem2++;
			}
		}
		for (int i = 2; i <= dem2; i++) {
			Sum += Min * pow(10.0, dem1 - 1);
			dem1--;
		}
		Min1 = Min;
		if (Min1 = chusoMax) {
			break;
		}
		
	}
	return Sum;
	
}

int main() {
	int a = 7, b = 6;
	int canh = 5;
	VeHCN(a, b);
	/*VeHCNRong(a, b);*/
	/*veTamGiacVuongCan(canh);*/
	int n = 343435677;
	int ketQua = xuLiDuLieu(n);
	printf("\n%d", ketQua);
	_getch;
	return 0;
}