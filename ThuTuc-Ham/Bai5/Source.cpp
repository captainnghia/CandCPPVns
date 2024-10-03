#include <stdio.h>
#include <conio.h>
void nhapDuLieu(int& x) {
	printf("\nMoi ban nhap vao so:");
	scanf_s("%d", &x);
}
void inFibonancy(int n) {
	int a0, a1;
	a0 = a1 = 1;
	if (n == 1) {
		printf("%d", a0);
	}
	if (n == 2) {
		printf("%d %d ", a0, a1);
	}
	for (int i = 1; i <= n - 2; i++) {
		int an = a0 + a1;
		a1 = an;
		printf("%d", an);

	}
}
int main() {
	int a;
	nhapDuLieu(a);
	inFibonancy(a);
	printf("\nKet qua la:%d", a);
	_getch;
	return 0;
}