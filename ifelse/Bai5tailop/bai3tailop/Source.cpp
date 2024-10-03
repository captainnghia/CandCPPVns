#include <stdio.h>
#include <conio.h>
#include <math.h>
int main() {
	// nhap so có hai chứ số và in ra cách đọc
	int n;// so nhap vao 
	printf("\nMoi nhap n");
	scanf_s("%d", &n);
	int Check = 0;// mac dinh là dương 
	if (n < 0) {
		Check = 1; // Bật thành 1 
		n *= -1;// biến n thành dương 

	}
	int soChuSo = log10((double)n) + 1;
	// xử lí 
	if(soChuSo	== 2) {
		if(Check == 1) {
			printf("\nAm");
		}
		int hangChuc, hangDonVi;
		hangChuc = n / 10;
		hangDonVi = n % 10;
		if (hangChuc == 1) {
			printf("\nMuoi");

		}
		else if (hangChuc == 2) {
			printf("\nHai muoi");

		}

		else if (hangChuc == 3) {
			printf("\nBa muoi");

		}
		else if (hangChuc == 4) {
			printf("\nBon muoi");

		}
		else if (hangChuc == 5) {
			printf("\nNam muoi");

		}
		else if (hangChuc == 6) {
			printf("\nSau muoi");

		}
		else if (hangChuc == 7) {
			printf("\nBay muoi");

		}
		else if (hangChuc == 8) {
			printf("\nTam muoi");

		}
		else if (hangChuc == 9) {
			printf("\nChin muoi");

		}
		if (hangDonVi == 1) {
			printf("Mot");

		}
		else if (hangDonVi == 2) {
			printf("Hai");

		}

		else if (hangDonVi == 3) {
			printf("Ba");

		}
		else if (hangDonVi == 4) {
			printf("Bon");

		}
		else if (hangDonVi == 5) {
			printf("Nam");

		}
		else if (hangDonVi == 6) {
			printf("Sau");

		}
		else if (hangDonVi == 7) {
			printf("Bay");

		}
		else if (hangDonVi == 8) {
			printf("Tam");

		}
		else if (hangDonVi == 9) {
			printf("Chin");
		}

	}
	else {
		printf("\nSo chu so phai la hai chu so . vuui long kiem tra lai.");	
	}

	_getch;
	return 0;
}