struct DanhSachMonHoc {
	int n;
	MONHOC* arr;
};

typedef struct DanhSachMonHoc DANHSACHMONHOC;

#include "MonHoc.cpp"
#include <stdlib.h>
void NhapDanhSachMon(DANHSACHMONHOC& ds) {
	do {
		printf("\nNhap vao so luong mon hoc: ");
		scanf_s("%d", &ds.n);

		if (ds.n < 0) {
			printf("\nVui long nhap lai");
		}
	} while (ds.n < 0);

	// cap phat dong cho *arr
	ds.arr = (MONHOC*)malloc(ds.n * sizeof(MONHOC));

	// duyet de in mang 
	for (int i = 0; i < ds.n; i++) {
		printf("\nNhap vao mon thu %d \n", i + 1);
		NhapMonHoc(ds.arr[i]);
	}
}

void XuatDanhSachMon(DANHSACHMONHOC ds) {


	// duyet de in mang 
	for (int i = 0; i < ds.n; i++) {
		printf("\nMon thu %d \n", i + 1);
		XuatMon(ds.arr[i]);
	}
}