#include <iostream>
using namespace std;

void DocSoCo1ChuSo(int x) {
	if (x == 0)
		cout << " khong ";
	else if (x == 1)
		cout << " mot ";
	else if (x == 2)
		cout << " hai ";
	else if (x == 3)
		cout << " ba ";
	else if (x == 4)
		cout << " bon ";
	else if (x == 5)
		cout << " nam ";
	else if (x == 6)
		cout << " sau ";
	else if (x == 7)
		cout << " bay ";
	else if (x == 8)
		cout << " tam ";
	else if (x == 9)
		cout << " chin ";


}
void DocSoCo2ChuSo(int x ) {
	int HangChuc = x / 10;
	int HangDonVi = x % 10;

	if(HangChuc != 1)
	DocSoCo1ChuSo(HangChuc);

	cout << " muoi";

	if (HangDonVi != 0) {
		if (HangDonVi == 5) {
			cout << " lam";
		}else

		DocSoCo1ChuSo(HangDonVi);
	}
	
}
void DocSoCo3ChuSo(int x) {
	int HangTram = x / 100;
	int HangChucvaDonVi = x % 100;
	int HangChuc = HangChucvaDonVi / 10;
	int HangDonvi = HangChucvaDonVi % 10;

	DocSoCo1ChuSo(HangTram);
	cout << "tram";

	if (HangChuc != 0) {
		DocSoCo2ChuSo(HangChucvaDonVi);
	}
	else {
		if (HangDonvi != 0) {
			cout << "le";
			DocSoCo1ChuSo(HangDonvi);
		}
	}
}
void DocPhuam(int SoDauPhay) {
	if (SoDauPhay == 1 || SoDauPhay == 4)
		cout << "nghin ";
	else if (SoDauPhay == 2 || SoDauPhay == 5)
		cout << "trieu ";
	else if (SoDauPhay == 3 || SoDauPhay == 6)
		cout << "ty ";
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
int main() {
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
	long long int n =-LLONG_MAX ;
	
	//cout << DemSoChuSo(n);
	long long int temp_n = n;

	if (temp_n < 0) {
		temp_n *= -1;/// nhan de cho no thanh so duong 
		cout << "am";
	}
	//int SoChuSo = temp_n == 0 ? 1 : (long long int)floor(log10(temp_n)) + 1;
	int SoChuSo = DemSoChuSo(temp_n);
	/*cout << "\nSo chu so cua " << n << "la:" << SoChuSo;*/

	int SoDauPhay = (SoChuSo - 1) / 3;

	/*cout << "\nSo dau phay cua so " << n << "la:" << SoDauPhay;*/

	

	/*if (temp_n == 0) {
		cout << temp_n << endl;
	}*/

	long long int LuyThua = pow(10, 3 * SoDauPhay);

	int CumSo = temp_n / LuyThua;
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
	temp_n %= LuyThua;

	while (temp_n != 0) {
	SoDauPhay--;
	 LuyThua = pow(10, 3 * SoDauPhay);
	 CumSo = temp_n / LuyThua;
	/* cout << CumSo << "=>";*/
	 if (CumSo != 0) {
		 DocSoCo3ChuSo(CumSo);
		 DocPhuam(SoDauPhay);
	 }
	
	/* cout << endl;*/
	 temp_n %= LuyThua;


	}
	cout << "\nHello world";
	system("pause");
	return 0;

}