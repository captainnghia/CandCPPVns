#include <stdio.h>
#include <conio.h>
void nhapDuLieu(int &x) {
	printf("\nMoi ban nhap vao gia tri:");
	scanf_s("%d", &x);
}
void xuLy(int n , int &Sa, int &Sb, double &Sc, int &Sd, int &Se ) {
	Sa = 0;
	Sb = 0;
	Sc = 0;
	Sd = 1;
	Se = 0;
	for (int i = 1; i <= n; i++) {
		Sa += i;
		Sb += i* i;
		Sc += (double)1/ i;
		
		Sd *= i;
		Se += Sd;
	}
	// dung vodi cos the tra ve nhieu so va phai dung tham chieu 
}
int main() {
	int i, Sa , Sb ,Sd , Se ;
	double Sc;
	nhapDuLieu(i);
	xuLy(i, Sa, Sb, Sc, Sd, Se );
	printf("\nKet qua la %d ", Sa);
	printf("\nKet qua la %d ", Sb);
	printf("\nKet qua la %lf ", Sc);
	printf("\nKet qua la %d ", Sd);
	printf("\nKet qua la %d ", Se);



	_getch;
	return 0;
}