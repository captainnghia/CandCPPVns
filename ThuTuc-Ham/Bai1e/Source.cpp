#include <stdio.h>
#include <conio.h>
void NhapDuLieu(int& x) {
	printf("\nNhap so nguyen :");
	scanf_s("%d", &x);
}
// co dugn bien tạm 
void HoanViCach1(int& a, int& b) {
	int Temp = a;// luu thang temp xong để đấy 
	a = b;
	b = Temp;
}
// khoog dugn bien tam 
void HoanViCach2(int& a, int& b) {
	a = a + b;
	b = a - b;
	a = a - b;

}
void SapXep(int &a, int &b, int &c, int &d) {
	if (a > b) {
		HoanViCach1(a, b);
	}
	if (a > c) {
		HoanViCach1(a, c);
	}
	if (a > d) {
		HoanViCach1(a, d);
	}
	if (b > c) {
		HoanViCach1(b, c);
	}
	if (b > d) {
		HoanViCach1(b, d);
	}
	if (c > d) {
		HoanViCach1(c, d);
	}


}
int main() {
	int a, b, c, d;
	NhapDuLieu(a);
	NhapDuLieu(b);
	NhapDuLieu(c);
	NhapDuLieu(d);

	//printf("\nTruoc khi hoan vi a = %d va b = %d", a, b);
	/*HoanViCach1(a, b);*/
	//HoanViCach2(a, b);
	//printf("\nSau khi hoan vi a = %d va b = %d", a, b);
	printf("\nDay so truoc khi sap xep la %d %d %d %d ", a, b, c, d);
	SapXep(a, b, c, d);
	printf("\nDay so sau khi sap xep la %d %d %d %d ", a, b, c, d);
	_getch;
	return 0;
}