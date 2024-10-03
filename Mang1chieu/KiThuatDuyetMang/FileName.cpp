#include <stdio.h>
#include <conio.h>
# define max 40 

void NhapMang(double a[], int n ) {// n tượng trưng cho sôs phần tử 
	for (int i = 0; i < n; i++) {
		printf("\nNhap vao diem thi thu %d la: ", i + 1);
		scanf_s("%lf", &a[i]);
	}
}
void XuatMang(double a[], int n) {// n tượng trưng cho sôs phần tử 
	for (int i = 0; i < n; i++) {
		printf("\nDiem thi thu %d la: %lf ", i + 1,a[i]);
		
	}
}
double TimDiemMax(double a[], int n) {
	double Max = a[0];/// gán giá trị cho phần tử đầu 
	for (int i = 0; i < n; i++) {
		if (a[i] > Max) {
			Max = a[i];
		}
	}
	return Max;
}
double TinhTong(double a[], int n) {
	double Tong = 0;
	for (int i = 0; i < n; i++) {
		Tong += a[i];
	}
	return Tong;
}
double TimDiemMin(double a[], int n) {
	double Min = a[0];/// gán giá trị cho phần tử đầu 
	for (int i = 0; i < n; i++) {
		if (a[i] < Min) {
			Min = a[i];
		}
	}
	return Min;
}
int DemSoLuongDiemLonNhat(double a[], int n, double Max) {
	int Dem = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] == Max)
			Dem++;
	}
	return Dem;
}
int main() {
	double a[max];
	int n;
	do {
		printf("Nhap vao so luong diem thi:");
		scanf_s("%d", &n);
		if (n < 0 || n > max) {
			printf("\nSo luong khong hop le.Vui long kiem tra lai");

		}
	} while (n < 0 || n > max);

	NhapMang(a, n);
	XuatMang(a, n);

	double Max = TimDiemMax(a, n);
	double Min = TimDiemMin(a, n);
	double Tong = TinhTong(a, n);
	int SoLuong = DemSoLuongDiemLonNhat(a, n, Max);// max là số vừa tìm được ở trên

	printf("\nMax la:%.2lf", Max);
	printf("\nMin la:%.2lf", Min);
	printf("\nTong la:%.2lf", Tong);
	printf("\nSo luong diem lon nhat la:%d", SoLuong);


	_getch();
	return 0;
}