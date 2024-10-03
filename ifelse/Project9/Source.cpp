#include <stdio.h>
#include <conio.h>
int main() {
	int ngay, thang, nam;
	printf("\nNhap ngay");
	scanf_s("%d", &ngay);
	printf("\nNhap thang");
	scanf_s("%d", &thang);
	printf("\nNhap nam");
	scanf_s("%d", &nam);
	int ngayKeTiep, thangKeTiep, namKeTiep;
	int ngayTruocDo, thangTruocDo, namTruocDo;
	if (thang == 1 || thang == 3 || thang == 5 || thang == 7 || thang == 8 || thang == 10 || thang == 12) {
		
		// trường hợp bình thường 
		if (ngay >= 2 || ngay <= 30) {
			ngayKeTiep = ngay + 1;
			thangKeTiep = thang;
			namKeTiep = nam;

			ngayTruocDo = ngay - 1;
			thangTruocDo = thang;
			namTruocDo = nam;

		}
		// trường hợp đầu tháng 
		else if (ngay == 1) {
			ngayKeTiep = ngay + 1;
			thangKeTiep = thang;
			namKeTiep = nam;

			namTruocDo = nam;
			// xét tháng trước đó có bao nhieu ngày 
			thangTruocDo = thang - 1;
			if (thangTruocDo == 0) {
				thangTruocDo = 12;
			}
			if (thangTruocDo == 12) {
				namTruocDo = nam - 1;

			}
			else {
				namTruocDo = nam;
			}
			if (thangTruocDo == 1 || thangTruocDo == 3 || thangTruocDo == 5 || thangTruocDo == 7 || thangTruocDo == 8 || thangTruocDo == 10 || thangTruocDo == 12) {
				ngayTruocDo = 31;
			}
			else if (thangTruocDo == 4 || thangTruocDo == 6 || thangTruocDo == 9 || thangTruocDo == 11) {
				ngayTruocDo = 30;
			}
			else {
				// thagn truoc do == 2 
				// nhuan 
				if ((nam % 4 == 0 && nam % 100 != 0) || nam % 400 == 0) {
					ngayTruocDo = 29;
				}
				else {
					ngayTruocDo = 28;
				}
			}
		}
		else if (ngay == 31 ) {
			ngayKeTiep = 1;
			thangKeTiep = thang + 1;
			namKeTiep = nam;
			if (thangKeTiep == 13 ) {
				thangKeTiep = 1;
				namKeTiep = nam + 1;
			}
			ngayTruocDo = 30;
			thangTruocDo = thang;
			namTruocDo = nam;

		}
	 }
	else if (thang == 4 || thang == 6 || thang == 9 || thang == 11 ) {
		if (ngay >= 2 || ngay <= 29) {
			ngayKeTiep = ngay + 1;
			thangKeTiep = thang;
			namKeTiep = nam;

			ngayTruocDo = ngay - 1;
			thangTruocDo = thang;
			namTruocDo = nam;

		}
		// trường hợp đầu tháng 
		else if (ngay == 1) {
			ngayKeTiep = ngay + 1;
			thangKeTiep = thang;
			namKeTiep = nam;

			namTruocDo = nam;
			// xét tháng trước đó có bao nhieu ngày 
			thangTruocDo = thang - 1;
			if (thangTruocDo == 0) {
				thangTruocDo = 12;
			}
			if (thangTruocDo == 12) {
				namTruocDo = nam - 1;

			}
			else {
				namTruocDo = nam;
			}
			if (thangTruocDo == 1 || thangTruocDo == 3 || thangTruocDo == 5 || thangTruocDo == 7 || thangTruocDo == 8 || thangTruocDo == 10 || thangTruocDo == 12) {
				ngayTruocDo = 31;
			}
			else if (thangTruocDo == 4 || thangTruocDo == 6 || thangTruocDo == 9 || thangTruocDo == 11) {
				ngayTruocDo = 30;
			}
			else {
				// thagn truoc do == 2 
				// nhuan 
				if ((nam % 4 == 0 && nam % 100 != 0) || nam % 400 == 0) {
					ngayTruocDo = 29;
				}
				else {
					ngayTruocDo = 28;
				}
			}
		}
		else if (ngay == 30 ) {
			ngayKeTiep = 1;
			thangKeTiep = thang + 1;
			namKeTiep = nam;

			ngayTruocDo = 29;
			thangTruocDo = thang;
			namTruocDo = nam;


		}
	}
	else {
	// tháng 2 
	// nhuan co toi da 29 
	if (ngay == 1) {
		ngayKeTiep = 2;
		thangKeTiep = thang;
		namKeTiep = nam;

		ngayTruocDo = 31;
		thangTruocDo = 1;
		namTruocDo = nam;


	}
	if ((nam % 4 == 0 && nam % 100 != 0) || nam % 400 == 0) {
		if (ngay >= 2 && ngay <= 28) {
			ngayKeTiep = ngay + 1;
			thangKeTiep = thang;
			namKeTiep = nam;

			ngayTruocDo = ngay - 1;
			thangTruocDo = thang;
			namTruocDo = nam;

		}
		else if (ngay == 29) {
			ngayKeTiep = 1;
			thangKeTiep = 3;
			namKeTiep = nam;

			ngayTruocDo = 28;
			thangTruocDo = thang;
			namTruocDo = nam;


		}
	}
	else {
		if (ngay >= 2 && ngay <= 27) {
			ngayKeTiep = ngay + 1;
			thangKeTiep = thang;
			namKeTiep = nam;

			ngayTruocDo = ngay - 1;
			thangTruocDo = thang;
			namTruocDo = nam;

		}
		else if (ngay == 28) {
			ngayKeTiep = 1;
			thangKeTiep = 3;
			namKeTiep = nam;

			ngayTruocDo = 27;
			thangTruocDo = thang;
			namTruocDo = nam;
		}
	}

}
	printf("\nNgay hien tai la ngay %d thang %d nam %d ", ngay, thang, nam);
	printf("\nNgay ke tiep la ngay %d thang %d nam %d ", ngayKeTiep, thangKeTiep, namKeTiep);
	printf("\nngay truoc do la ngay %d thang %d nam %d ", ngayTruocDo, thangTruocDo, namTruocDo);
	_getch;
	return 0;
}