#include <stdio.h>
#include <conio.h>

void ThemPhanTu(int a[], int &n, int vitrithem, int phantuthem) {
	for (int i = n - 1; i >= vitrithem; i--) {
		a[i + 1] = a[i];
	}
	a[vitrithem] = phantuthem;
	n++;// tăng lên 1
}

void XoaPhanTu(int a[], int& n, int vitrixoa) {
	for (int i = vitrixoa + 1; i < n; i++) {
		a[i - 1] = a[i];
	}
	
	n--;// giảm đi 1 
}
void XoaTatCaSoChan(int a[], int &n) {
	for (int i = 0; i < n; i++) {
		if (a[i] % 2 == 0) {
			XoaPhanTu(a, n, i);
			i--;
			// xóa xong phải cập nhật lại mảng 
		}
		}
}
void Themsovaosau(int a[], int& n) {
	for (int i = 0; i < n; i++) {
		if (a[i] % 2 != 0) {
			ThemPhanTu(a, n, i + 1, 0);
			i++;// để bỏ qua số vừa thêm vào nếu không nó sẽ bị sai khi thêm ) sau số chẵn 
		}
	}
}
void XuatMang(int a[], int n) {
	for (int i = 0; i < n; i++) {
		printf("%4d", a[i]);
	}
}
int main() {
	int a[] = { 1, 2,3,4,5,6,6 };
	int n = sizeof(a) / sizeof(a[0]);

	printf("\nMang ban dau la:");
	XuatMang(a, n);
	/*printf("\nMang sau khi them la:");
	ThemPhanTu(a, n, 2, 69);
	XuatMang(a, n);*/

	/*printf("\nMang sau khi xoa la:");
	XoaPhanTu(a, n, 2);
	XuatMang(a, n);*/

	/*printf("\nMang sau khi xoa so chan la:");
	XoaTatCaSoChan(a, n);
	XuatMang(a, n);*/

	printf("\nMang sau khi them so vao sau la:");
	Themsovaosau(a, n);
	XuatMang(a, n);


	_getch();
	return 0;
	
}