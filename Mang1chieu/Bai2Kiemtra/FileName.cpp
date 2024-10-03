#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <Windows.h>
#include <iostream>
#include <limits.h>

#define max 100
//2. Các thao tác kiểm tra
//a.Mảng có phải là mảng toàn chẵn
//b.Mảng có phải là mảng toàn số nguyên tố
//c.Mảng có phải là mảng tăng dần
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
int KiemTraToanChan_CachThieuNhi(int a[], int n) {
	int dem = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] % 2 == 0) {
			dem++;
		}
	}
	if (dem == n) {
		return 1;// thỏa 
	}
	return 0;/// không thỏa 

	/*return dem == n;*/
}
int KiemTraToanChan_CachVaoDoi(int a[], int n) {

	for (int i = 0; i < n; i++) {
		if (a[i] % 2 != 0) {
			return 0;/// không thỏa 
		}
	}
	
	return 1;/// thỏa 

	
}
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
int KiemTraMangToanNguyenTo(int a[], int n) {
	for (int i = 0; i < n; i++) {
		if (KiemTraSoNguyenTo(a[i]) == 0) {
			return 0;// không thỏa 
		}
	}
	return 1;
}

int KiemTraTangDan(int a[], int n) {
	// ta so sanh 
	for (int i = 1; i < n; i++) {// phải bắt đầu là 1 
		if (a[i- 1] > a[i]) {//vd a0 > a1
			return 0;// khoong thỏa 
		}
	}
	return 1;
}
//3. Các thao tác tính toán
//a.Có bao nhiêu số chia hết cho 4 nhưng không
//chia hết cho 5
//b.Tổng các số nguyên tố có trong mảng
int DemSoLuongChiaHetCho4(int a[], int n) {
	int dem = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] % 4 == 0 && a[i] % 5 != 0) {
			
			dem++;
		}
	}
	return dem;
	
}
int TongCacSoNguyenTo(int a[], int n) {
	int tong = 0;
	for (int i = 0; i < n; i++) {
		if (KiemTraSoNguyenTo(a[i]) == 1) {
			tong += a[i];
		}
	}
	return tong;
}
//4. Các thao tác tìm kiếm
//a.Vị trí cuối cùng của phần tử x trong mảng
//b.Vị trí số nguyên tố đầu tiên trong mảng nếu có
//c.Tìm số nhỏ nhất trong mảng
//d.Tìm số dương nhỏ nhất trong mảng
int TimViTriCuoiTrongMang(int a[], int n, int x) {/// x là vị trí cần tìm
	// có thể duyệt từ đầu 
	// đây là duyệt từ cuối lên 
	for (int i = n - 1; i >= 0; i--) {
		if (a[i] == x) {
			a[i] = x;
			return i;///return 1; rồi cho chạy nhé 
		}
		
	}
	return -1;//	không tìm thấy trong mảng 

}
int TimviTriNguyenToDauTien(int a[], int n) {
	for (int i = 0; i < n; i++) {
		if (KiemTraSoNguyenTo(a[i]) == 1) {
			return i;/// return 1; rồi cho chạy nhé 
		}
	}
	return -1;
}
int TimMin(int a[], int n) {
	int Min = a[0];// nhớ phải gán min cho a0 
	for (int i = 0; i < n; i++) {
		if (a[i] < Min) {
			Min = a[i];
		}
	}
	return Min;
}
int TimDuongMin(int a[], int n) {
	int viTriduongdautien = -1;
	for (int i = 0; i < n; i++) {
		if (a[i] >= 0) {
			viTriduongdautien = i;
			break;
		}
	}
	if (viTriduongdautien == -1) {
		return viTriduongdautien;
	}
	int Min = a[viTriduongdautien];
	for (int i = viTriduongdautien + 1; i < n; i++) {
		if (a[i] >= 0 && a[i] < Min) {
			Min = a[i];
		}
	}
	return Min;
}
int TimDuongMin_Cach2(int a[], int n) {
	int Min = INT_MAX;
	int check = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] >= 0 ) {
			check = 1;
			if (a[i] < Min) {
				Min = a[i];
			}
		
		}

	}
	if (check = 0) {///không có số dương 
		return -1;
	}
	return Min;
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

	int timduongmin = TimDuongMin_Cach2(a, n);
	printf("\nDa tim thay min %d ", timduongmin);

	//int min = TimMin(a, n);
	//printf("\nDa tim thay min %d ",min);

	/*int timsonguyento = TimviTriNguyenToDauTien(a, n);
	if (timsonguyento == 1) {
		printf("\nDa tim thay ");

	}
	else {
		printf("\nKhong tim thay");
	}*/
	
	/*int timx = TimViTriCuoiTrongMang(a, n, 5);
	if (timx == 1) {
		printf("\nDa tim thay");

	}
	else {
		printf("\nKhong tim thay");
	}*/

	/*int check1 = KiemTraToanChan_CachVaoDoi(a, n);
	if (check1 == 1) {
		printf("\nMang toan so chan");

	}
	else {
		printf("\nMang con ton tai phan tu le");
	}*/

	/*int check2 = KiemTraMangToanNguyenTo(a, n);
	if (check2 == 1) {
		printf("\nMang toan so nguyen to");

	}
	else {
		printf("\nMang con ton tai phan tu khong phai so nguyen to");
	}
	*/

	/*int check3 = KiemTraTangDan(a, n);
	if (check3 == 1) {
		printf("\nMang tang dan");

	}
	else {
		printf("\nMang khong phai tang dan");
	}*/

	/*int demBai3 = DemSoLuongChiaHetCho4(a, n);
	printf("\nSo chia het cho 4 la %d",demBai3);

	int tongsonguyento = TongCacSoNguyenTo(a, n);
	printf("\nTong cac so nguyen to la %d", tongsonguyento);*/

	goto nghia;
	_getch();
	return 0;
}