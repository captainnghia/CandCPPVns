#include <stdio.h>
#include <conio.h>
#include <math.h>
int main() {
	/*2. Nhập vào 2 số nguyên dương a & b với điều kiện là b > a.Hãy thực hiện các yêu cầu sau :
	a.Đếm xem trong đoạn[a, b] có bao nhiêu số đối xứng, chính phương, nguyên tố
		b.Tính tổng các số đối xứng, chính phương, nguyên tố trong đoạn[a, b]*/
	int a, b;
	do { 
		printf("\nNhap vao  a ");
		scanf_s("%d", &a);

		if (a < 0) {
			printf("vui long kiem tra lai gia tri cua a ");

		}
	} while (a < 0);
	do { 
		printf("\nNhap vao so b:");
			scanf_s("%d", &b);
			if (b <= a) {
				printf("\nVui long nhap lai ban nhé ");
			}
	} while (b <= a); // đây là điều kiện lặp là ngược lại 

	int tongDoiXung = 0;
	int demDoiXung = 0;

	int tongChinhPhuong = 0;
	int demChinhPhuong = 0;

	int tongNguyenTo = 0;
	int demNguyenTo = 0;
	for (int i = a; a < b; i++) {

		int Temp = i; // lưu biến phụ 
		int soDaoNguoc = 0;
		int dem = log10((double)Temp);
		while (Temp != 0) {
			int chuSo = Temp % 10;
			Temp /= 10;
			soDaoNguoc += chuSo * pow(10.0, dem--);


		}
		/*printf("\nSo dao nguoc cua %d la %d ", i,soDaoNguoc);*/
		if (i == soDaoNguoc) {
			/*printf("\nLa so doi xung ");*/
			demDoiXung++;
			tongDoiXung += i;
		}
		
		// kiểm tra sô chính phương 
		if (sqrt((double(i)))== (int)sqrt((double)i)) {
			/*printf("\nLa so chính phuong  ");*/
			demChinhPhuong++;
			tongChinhPhuong += i;
		}

		// kiểm tra số nguyên tố 
		if (i< 2) {
			/*printf("\nKhong phai la so nguyen to ");*/
		}
		else {
			int Check = 1;// tượng trưng cho true 
			for (int j = 2; j < ((double)i); j++) {
				
				if(i % j == 0 ){
					Check = 0;// false 
					break;
				}
			}
			if (Check == 1) {
				/*printf("\nLa so nguyen to ");*/
				demNguyenTo += i;
				tongNguyenTo += i;
			}
			
		}
	}
	printf("\nSo luong cac so doi xung la %d", demDoiXung);
	printf("\nSo luong cac so chinh phuong la %d ", demChinhPhuong);
	printf("\nSo luong cac so nguyen to la %d ", demNguyenTo);

	printf("\nTong cac so doi xung la %d ", tongDoiXung);
	printf("\nTong cac so chinh phuong la %d", tongChinhPhuong);
	printf("\nTong cac so nguyen to la %d ", tongNguyenTo);
	_getch;
	return 0;

}



