#include <stdio.h>
#include <conio.h>
#include <math.h>
void daoSo(int &n) {
	int soLuongChuSo = log10(double(n));
	int tong = 0;
	while (n != 0) {
		tong += n % 10 * pow(10.0, soLuongChuSo--);
		n /= 10;

	}
	n = tong;
}
void docChuSo(int chuSo) {
	if (chuSo == 1) {
		printf(" Mot ");
	}
	else if(chuSo == 2){
		printf(" Hai ");
	}
	else if (chuSo == 3) {
		printf(" Ba ");
	}
	else if (chuSo == 4) {
		printf(" Bon ");
	}
	else if (chuSo == 4) {
		printf(" Bon ");
	}
	else if (chuSo == 5) {
		printf(" Nam ");
	}
	else if (chuSo == 6) {
		printf(" Sau ");
	}
	else if (chuSo == 7) {
		printf(" Bay ");
	}
	else if (chuSo == 8) {
		printf(" Tam ");
	}
	else if (chuSo == 9) {
		printf(" Chin ");
	}

}
void docPhuAm(int soChuSoConLai) {
	if (soChuSoConLai == 1) {
		printf(" Muoi ");
	}
	else if (soChuSoConLai == 2) {
		printf(" Tram ");
	}
	else if (soChuSoConLai == 3) {
		printf(" Ngan ");
	}
}
void DocSo(int n) {
	daoSo(n);// B1
	while (n != 0) {
		docChuSo(n % 10); // b2
		n /= 10;// bor chu so vua lay ra 
		docPhuAm(log10(double(n) + 1));// b3


		
	}
}
int main() {
	int n = 1234;
	
	DocSo(n);
	
	_getch;
	return 0;
}