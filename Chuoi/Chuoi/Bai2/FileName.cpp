#include <stdio.h>
#include <conio.h>
#include <string.h>

char* BienChuoiThanhThuong(char* s) {

	// tạo bản sao 
	char* p = _strdup(s);
	// biêns thành thường 
	_strlwr_s(p, strlen(p) + 1);
	return p;
}
char* BienChuoiThanhHoa(char* s) {

	// tạo bản sao 
	char* p = _strdup(s);
	// biêns thành thường 
	_strupr_s(p, strlen(p) + 1);
	return p;
}

char* BienKyTuDauThanhHoa(char* s) {
	// tạo bản sao 
	char* p = _strdup(s);
	// biến đổi 
	// lam sao tim duoc ki tu dau tien cua 1 tu
	// neu truoc do la khoang trang va tiep theo sau la 1 cai gi do khac khoang trang thi do chinh la ki tu dau tien cua 1 tu 
	// luu y: Neu dau tien cua chuoi khong phai la khoang trang thi se bij loi

	int length = strlen(p);
	if (p[0] != ' ') {
		if (p[0] >= 'a' && p[0] <= 'z') {
			p[0] -= 32;
		}
	}
	for (int i = 0; i < length; i++) {
		if (p[i] == ' ' && p[i + 1] != ' ') {
			if (p[i + 1] >= 'a' && p[i + 1] <= 'z') {
				p[i + 1] -= 32;
			}
		}
	}
	return p;
}

void XoaKyTu(char* s, int vitrixoa) {

	int length = strlen(s);
	for (int i = vitrixoa + 1; i < length; i++) {
		s[i - 1] = s[i];
	}
	s[length - 1] = '\0';
}

char* XoaHetKhoangTrangThua(char* s) {
	// taoj bản sao 
	char* p = _strdup(s);
	int length = strlen(p);
	for (int i = 0; i < length; i++) {
		if (p[i] == ' ' && p[i + 1] == ' ') {
			XoaKyTu(p, i);
			i--;
			length--;
		}
	}

	if (p[0] == ' ') {
		XoaKyTu(p, 0);
		length--;
	}
	if (p[length - 1] == ' ') {
		XoaKyTu(p, length - 1);
	}
	return p;
}
int main() {

	char s[] = "   guyen       Minh    Nghia    ";
	char p[300];
	/*strcpy_s(p, BienChuoiThanhThuong(s));
	strcpy_s(p, BienChuoiThanhHoa(s));
	strcpy_s(p, BienKyTuDauThanhHoa(s));*/
	/*printf("\ns = %s", s);
	printf("\np = %s", p);*/

	/*XoaKyTu(s, 0);
	printf("\ns = %s", s);*/

	strcpy_s(p,XoaHetKhoangTrangThua(s));
	printf("\ns = %s", s);
	printf("\np = %s", p);

	_getch();
	return 0;
}