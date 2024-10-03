#include <iostream>
#include <io.h>// thu vien dinh nghia cho ham setmode 
#include <fcntl.h>//thu vien dinh nghia cho ham setmode 4
#include <stdlib.h>
#include <conio.h>
using namespace std;

void DocSoCo1ChuSo(int x) {
	if (x == 0)
		wcout << L"không ";
	else if (x == 1)
		wcout << L"một ";
	else if (x == 2)
		wcout << L"hai ";
	else if (x == 3)
		wcout << L"ba ";
	else if (x == 4)
		wcout << L"bốn ";
	else if (x == 5)
		wcout << L"năm ";
	else if (x == 6)
		wcout << L"sáu ";
	else if (x == 7)
		wcout << L"bảy ";
	else if (x == 8)
		wcout << L"tám ";
	else if (x == 9)
		wcout << L"chín ";


}
void DocSoCo2ChuSo(int x) {
	int HangChuc = x / 10;
	int HangDonVi = x % 10;

	if (HangChuc != 1) {
		DocSoCo1ChuSo(HangChuc);
		wcout << L"mươi ";
	}
	else {
		wcout << L"mười ";
	}

	if (HangDonVi != 0) {
		if (HangDonVi == 5) {
			wcout << L"lăm ";
		}
		else if (HangChuc > 1 && HangDonVi == 1) {
			wcout << L"mốt ";
		}
		else

			DocSoCo1ChuSo(HangDonVi);
	}

}
void DocSoCo3ChuSo(int x) {
	int HangTram = x / 100;
	int HangChucvaDonVi = x % 100;
	int HangChuc = HangChucvaDonVi / 10;
	int HangDonvi = HangChucvaDonVi % 10;

	DocSoCo1ChuSo(HangTram);
	wcout << L"trăm ";

	if (HangChuc != 0) {
		DocSoCo2ChuSo(HangChucvaDonVi);
	}
	else {
		if (HangDonvi != 0) {
			wcout << L"lẻ ";
			DocSoCo1ChuSo(HangDonvi);
		}
	}
}
void DocPhuam(int SoDauPhay) {
	if (SoDauPhay == 1 || SoDauPhay == 4)// SoDauPhay % 3 == 1 
		wcout << L"nghìn ";
	else if (SoDauPhay == 2 || SoDauPhay == 5) //SoDauPhay % 3 == 2
		wcout << L"triệu ";
	else if (SoDauPhay == 3 || SoDauPhay == 6)  //SoDauPhay % 3 == 0 && SoDauPhay != 0 
		wcout << L"tỷ ";
}
int DemSoChuSo(long long int x) {
	/*int dem = 0;*/
	/*if (x == 0) {
		dem = 1;
	}*/
	int dem = x == 0 ? 1 : 0;
	while (x != 0) {
		x /= 10;
		dem++;

	}
	return dem;
}
void DocSo(long long int n) {
	/*for (int i = 1; i < 1000; i++) {
		cout << i << "=>";
		if (i < 10) {
			DocSoCo1ChuSo(i);
		}
		else if(i < 100) {
			DocSoCo2ChuSo(i);
		}
		else if (i < 1000) {
			DocSoCo3ChuSo(i);
		}
		cout << endl;
	}
	*/

	// Buoc 1 
	

	//cout << DemSoChuSo(n);


	if (n < 0) {
		n *= -1;/// nhan de cho no thanh so duong 
		wcout << L"âm ";
	}
	//int SoChuSo = temp_n == 0 ? 1 : (long long int)floor(log10(temp_n)) + 1;
	int SoChuSo = DemSoChuSo(n);
	/*cout << "\nSo chu so cua " << n << "la:" << SoChuSo;*/

	int SoDauPhay = (SoChuSo - 1) / 3;

	/*cout << "\nSo dau phay cua so " << n << "la:" << SoDauPhay;*/



	/*if (temp_n == 0) {
		cout << temp_n << endl;
	}*/

	long long int LuyThua = pow(10, 3 * SoDauPhay);

	int CumSo = n / LuyThua;
	/*cout << CumSo << "=>";*/
	if (CumSo < 10) {
		DocSoCo1ChuSo(CumSo);
	}
	else if (CumSo < 100) {
		DocSoCo2ChuSo(CumSo);
	}
	else if (CumSo < 1000) {
		DocSoCo3ChuSo(CumSo);
	}
	DocPhuam(SoDauPhay);
	/*cout << endl;*/
	n %= LuyThua;
	SoDauPhay--;

	/*while (n != 0)*/
	while(SoDauPhay >= 0)
	{
		
		LuyThua = pow(10, 3 * SoDauPhay);
		CumSo = n / LuyThua;
		/* cout << CumSo << "=>";*/
		if (CumSo != 0) {
			DocSoCo3ChuSo(CumSo);
			DocPhuam(SoDauPhay);
		}
		else {
			if (SoDauPhay == 3 || SoDauPhay == 6)
				wcout << L"tỷ ";
			
		}

		/* cout << endl;*/
		n %= LuyThua;

		SoDauPhay--;
	}
}
int main() {
	quaylai:
	_setmode(_fileno(stdout), _O_WTEXT);/// kich hoat che do bang ma unicode co dau 
	//[a, b] => a + rand() % (b - a +1)
	//[0, 10 tỷ ] => rand() % 1000000001
	long long int n; //= rand() % 1000000001;
	wcout << L"Mời bạn nhập vào số cần đọc:";
	cin >> n;
	wcout << n << ": ";
	DocSo(n);
	wcout << L"\n\nBạn có muốn tiếp tục không ? Nhấn phím c để tiếp tục :";

	char c = _getch();
	if (c == 'c' || c == 'C') {
		system("cls");
		goto quaylai;
	}
	system("pause");
	return 0;

}