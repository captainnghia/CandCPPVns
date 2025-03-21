// #pragma once
#ifndef MONHOC_H
#define MONHOC_H

#include <stdio.h>
#include <conio.h>

struct MonHoc {
	char TenMon[30];
	float SoDiem;
	int SoChi;
};

typedef struct MonHoc MONHOC;

void NhapMonHoc(MONHOC& mh) {
	while (getchar() != '\n');  // xoa bo nho dem 


	printf("\nNhap vao ten mon hoc: ");
	gets_s(mh.TenMon);


	// nhap diem 
	do {
		printf("\nNhap vao so diem mon hoc: ");
		scanf_s("%f", &mh.SoDiem);

		if (mh.SoDiem < 0 || mh.SoDiem > 10) {
			printf("\nSo diem khong hop le ");
		}

	} while (mh.SoDiem < 0 || mh.SoDiem > 10);

	do {
		printf("\nNhap vao so chi:");
		scanf_s("%d", &mh.SoChi);

		if (mh.SoChi, 0) {
			printf("\nSo chi khong hop le vui long kiem tra lai");
		}

	} while (mh.SoChi, 0);
}
void XuatMon(MONHOC mh) {
	printf("\nTen mon hoc: %s", mh.TenMon);
	printf("\nDiem thi: %f", mh.SoDiem);
	printf("\nSo chi la: %d", mh.SoChi);
}
#endif