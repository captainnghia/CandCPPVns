#include <stdio.h>
#include <conio.h>
void XuatMang(int a[], int n) {
	for (int i = 0; i < n; i++) {
		printf("%4d",a[i]);
	}
}
void HoanVi(int& a, int& b) {
	a = a - b;// viết đại 
	b = a + b; /// b = a 
	a = b - a;// a = b 
		
}
void InterchangSort_Tang(int a[], int n) {
	for (int i = 0; i < n - 1; i++) {// i< n - 1 là thằng áp cuối vd a - b -c - d thì nó sẽ là c 
		for (int j = i + 1; j < n; j++) {///j = i + 1 là thằng đứng sau a để cho nó lớn hơn 
			if (a[i] > a[j]) {
				HoanVi(a[i], a[j]);
			}	
		}
	}
}
void InterchangSort_Giam(int a[], int n) {
	for (int i = 0; i < n - 1; i++) {// i< n - 1 là thằng áp cuối vd a - b -c - d thì nó sẽ là c 
		for (int j = i + 1; j < n; j++) {///j = i + 1 là thằng đứng sau a để cho nó lớn hơn 
			if (a[i] < a[j]) {
				HoanVi(a[i], a[j]);
			}
		}
	}
}
void InterchangSort(int a[], int n, char phanbiet) {
	for (int i = 0; i < n - 1; i++) {// i< n - 1 là thằng áp cuối vd a - b -c - d thì nó sẽ là c 
		for (int j = i + 1; j < n; j++) {///j = i + 1 là thằng đứng sau a để cho nó lớn hơn 
			if (phanbiet == 't') {// tăng
				if (a[i] > a[j]) {
					HoanVi(a[i], a[j]);
				}
			}
			else if (phanbiet == 'g') {
				if (a[i] < a[j]) {
					HoanVi(a[i], a[j]);
				}
			}
		}
	}
}
int main() {
	int a[] = { 2, 4,5,0,1,9,8 };
	int n = sizeof(a) / sizeof(a[0]);

	printf("\nMang ban dau la:");
	XuatMang(a, n);

	/*printf("\nMang sau khi sap xep tang dan la:");
	InterchangSort_Tang(a, n);
	XuatMang(a, n);


	printf("\nMang sau khi sap xep giam dan la:");
	InterchangSort_Giam(a, n);
	XuatMang(a, n);*/
	printf("\nMang sau khi sap xep giam dan la:");
	InterchangSort(a, n, 't');
	XuatMang(a, n);

	_getch();
	return 0;
}