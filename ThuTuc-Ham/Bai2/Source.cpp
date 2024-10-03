#include <stdio.h>
#include <conio.h>
#include <math.h>
void NhapDuLieu(int& x) {
	printf("\nNhap vao so nguyen :");
	scanf_s("%d", &x);
}
int TraVeSoDao(int n) {
	int soLuongChuSo = log10((double)n);
	int tong = 0;
	// 123 = 321 
	while (n != 0) {
		tong += n % 10 * pow(10, soLuongChuSo--);
		n /= 10; /// bỏ chữ số cuối đi 
	}
	return tong;
}
int KiemTraDoiXung(int n) {
	if (n == TraVeSoDao(n)) {
		return 1;
	}
	return 0;
}
int KiemTraSoChinhPhuong(int n) {
	double ketQua = sqrt((double)n);
	if (ketQua == sqrt(int(n))) {
		return 1; // la so ching phuogn 
	}

	return 0;

}
int KiemTraNguyenTo(int n) {
	if (n < 2) {
		return 0;
	}
	else if (n > 2) {
		if (n % 2 == 0) {
			return 0; // khong phari la so nguyen to 
		}
		for (int i = 3; i <= (int)sqrt(double(n));i += 2){
			if (n % i == 0) {
				return 0;
			}
}
	}
	return 1;
}
int TinhTongSoLe(int n) {
	int tong = 0;
	while (n != 0) {
		int chuSo = n % 10;
		n /= 10;
		if (chuSo % 2 != 0) {
			tong += chuSo;
		}
	}
	return tong;
}
int tinhTongChuSoNguyenTo(int n) {
	int tong = 0;
	while (n != 0) {
		int chuSo = n % 10;
		n /= 10;
		if (KiemTraNguyenTo(chuSo) == 1) {
			tong += chuSo;
		}
	}
	return tong;
}
int tinhTongCacChuSoChinhPhuong(int n) {
	int tong = 0;
	while (n != 0) {
		int chuSo = n % 10;
		n /= 10;
		if (KiemTraSoChinhPhuong(chuSo) == 1) {
			tong += chuSo;
		}
	}
	return tong;
}

int main() {
	/*int a;*/
	/*NhapDuLieu(a);
	int soDao = TraVeSoDao(a);
	printf("\nSo dao la:%d", soDao);*/
	/*cau b*/
	/*NhapDuLieu(a);
	int soDoiXung = KiemTraDoiXung(a);
	printf("\nDay la so doi xung %d", soDoiXung);*/
	// cau c 
	//NhapDuLieu(a);
	//int soChinhPhuong = KiemTraSoChinhPhuong(a);
	////printf("\nDay la so chinh phuong %d", soChinhPhuong);
	//if (soChinhPhuong != KiemTraSoChinhPhuong(a)) {
	//	printf("\nDay la so chinh phuong %d", soChinhPhuong);
	//}
	//else {
	//	printf("\nDay la so chinh phuong %d", soChinhPhuong);
	//}
	/*NhapDuLieu(a);
	int soNguyenTo = KiemTraNguyenTo(a);
	printf("\nDay la so nguyen to %d", soNguyenTo);
	*/
	int a;
	NhapDuLieu(a);
	/*int tongSoLe = TinhTongSoLe(a);
	printf("\Tong cac so le la:%d", tongSoLe);*/
	/*int tongSoNguyenTo = tinhTongChuSoNguyenTo(a);
	printf("\nTong cac so nguyen to la :%d", tongSoNguyenTo);*/
	int tongCacSoChinhPhuong = tinhTongCacChuSoChinhPhuong(a);
	printf("\nTong cac so chinh phuong la:%d", tongCacSoChinhPhuong);
	_getch;
	return 0;
}