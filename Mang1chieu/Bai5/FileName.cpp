#include <stdio.h>
#include <conio.h>
#include <math.h>
#define max 100
void NhapMang(int a[], int n) {
	for (int i = 0; i < n; i++) {
		printf("\nNhap vao a[%d]:", i);
		scanf_s("%d", &a[i]);
	}
}
void XuatMang(int a[], int n) {
	for (int i = 0; i < n; i++) {
		printf("%4d", a[i]);

	}
}
//5. Các thao tác xử lý
//a.Tách các số nguyên tố có trong mảng a đưa
//vào mảng b.
//b.Tách mảng a thành 2 mảng b(chứa các số
//	nguyên dương) và c(chứa các số còn lại)
//	c.Sắp xếp mảng giảm dần
//	d.Sắp xếp mảng sao cho các số dương đứng
//	đầu mảng giảm dần, kế đến là các số âm
//	tăng dần, cuối cùng là các số 0
int KiemTraSoNguyenTo(int x) {
	if (x < 2) {
		return 0;
	}
	else if (x > 2) {
		if (x % 2 == 0) {
			return 0;
		}
		for (int i = 3; i < (int)sqrt(x); i += 2) {
			if (x % i == 0) {
				return 0;
			}
		}
	}
	return 1;// thỏa 
}
void TachSoNguyenTo(int a[], int n, int b[], int &m) {
	m = 0;
	for (int i = 0; i < n; i++) {
		if (KiemTraSoNguyenTo(a[i]) == 1) {
			b[m++] = a[i];
		}
	}
}
void TachThanh2SoAmDuong(int a[], int n, int b[], int& m, int c[], int &k) {
	m = k = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] >= 0) {
			b[m++] = a[i];
		}
		else {
			c[k++] = a[i];
		}
	}
} 
void HoanVi(int& a, int& b) {
	/*int temp = a;
	a = b;
	b = temp;*/
	b = a + b;//// cho đại 
	a = b - a;// a=b // bởi vì ta trừ ở trên thì còn lại b 
	b = b - a;// b =a //b tổng trừ đi a mới 
}
void InterchangeSort(int a[], int n, char phanbiet) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (phanbiet == 't') {
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
	///

	
}
void InterchangeSort_Duong_Am_So0(int a[], int  n, int b[], int m, int c[], int k) {
	/// mảng dương tăng dần // không có số 0 
	

	InterchangeSort(b, m, 'g');

	// mảng âm tăng dần (có số 0)
	InterchangeSort(c, k, 't');
	// m = 3, k = 2

	int i;
	for (i = 0; i < m; i++)
	{
		a[i] = b[i];
	}

	for (int j = 0; j < k; j++)
	{
		a[i++] = c[j];
	}

	
}

	

int main() {
nghia:
	int a[max];
	int n; // số lượng phần tử của mảng 
	do {
		printf("\nNhap vao so luong phan tu cua mang:");
		scanf_s("%d", &n);
		if (n < 0 || n > max) {
			printf("\nLoi!");
		}
	} while (n < 0 || n > max);

	NhapMang(a, n);
	XuatMang(a, n);

	int b[max]; int m;
	printf("\nMang b chua cac so nguyen to co trong mang a la :");
	TachSoNguyenTo(a, n, b, m);
	XuatMang(b, m);

	int c[max]; int k;
	TachThanh2SoAmDuong(a, n, b, m, c, k);
	printf("\nSo duong la:");
	XuatMang(b, m);
	printf("\nSo am la:");
	XuatMang(c, k);

	printf("\nMang tang dan la:");
	InterchangeSort(a, n, 't');
	XuatMang(a, n);

	printf("\nMang giam dan la:");
	InterchangeSort(a, n, 'g');
	XuatMang(a, n);

	printf("\nMang duong - am -0:");
	InterchangeSort_Duong_Am_So0(a, n , b, m , c,k );
	XuatMang(a, n);



	goto nghia;
	_getch();
	return 0;
}