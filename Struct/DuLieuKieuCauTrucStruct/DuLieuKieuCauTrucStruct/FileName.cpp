#include "MonHoc.cpp"
#include <stdlib.h>
#include "DachSachMon.cpp"



int main() {

	/*MONHOC mh;
	NhapMonHoc(mh);
	XuatMon(mh);*/

	DANHSACHMONHOC ds;
	NhapDanhSachMon(ds);
	XuatDanhSachMon(ds);


	free(ds.arr);

	_getch();
	return 0;
}