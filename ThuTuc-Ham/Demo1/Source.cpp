#include <stdio.h>
#include <conio.h>

void HoanVi(int &a, int &b ) 
	{
	int Temp = a;// gan cho temp xong de day 
	a = b;
	b = Temp;
	} 
int main() {
	int a = 1, b = 2;
	printf("\nTruoc khi hoan vi a = %d va b = %d",a ,b);
	HoanVi(a, b);
	printf("\nSau khi hoan vi la a = %d va b = %d ", a, b);
	_getch;
	return 0;
}