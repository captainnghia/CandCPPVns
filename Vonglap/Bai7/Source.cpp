#include <stdio.h>
#include <conio.h>
int main() {
	/*5. Nhập n(n >= 1).In n số đầu tiên trong dãy Fibonacy.Biết nguyên tắc của dãy Fibonacy như sau :
	a[0] = a[1] = 1
		a[n] = a[n – 1] + a[n – 2]
		Vd : Dãy Fibonacy bình thường là : 1 1 2 3 5 8 13 21 34 55 89 144 233
		Test 1 : Nhập n = 3 = > in ra là : 1 1 2
		Test 2 : Nhập n = 7 = > in ra là : 1 1 2 3 5 8 13
		Test 3 : Nhập n = 1 = > in ra là*/
	int n;
	do { 
		printf("\nMoi nhap vao n:");
		scanf_s("%d", &n);
		if (n <= 1) {
			printf("\nVui long nhap lai ");
		}
	} while (n <= 1);
	int a1 = 1; int a2 = 1;
	if (n == 1) {
		printf("%d", a1);
	}
	else if (n == 2) {
		printf("%d %d ", a1, a2);
	}
	else {
		printf("%d %d ", a1, a2);
		for (int i = 1; i < n - 2; i++) {
			int an = a1 + a2;
			a1 = a2;
			a2 = an;
			printf("\n%d", an);
		}


	}
	_getch;
	return 0;
}