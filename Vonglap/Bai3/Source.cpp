#include <stdio.h>
#include <conio.h>
#include <math.h>
int main() {

	/*1. Nhập một số nguyên dương n(n > 0).Hãy cho biết :
	a.Có phải là số đối xứng ? Ví dụ : 121, 12021, …
		b.Có phải là số chính phương ? Ví dụ : 0, 1, 4, 9, 16, 25 …
		c.Có phải là số nguyên tố ? Ví dụ : 2, 3, 5, 7, 11, 13 …
		d.Các chữ số có tăng dần hay giảm dần không ?
		Lưu ý ở chỗ này cần phải phân biệt rõ ràng giữa tăng dần “nghiêm ngặt” và “không nghiêm ngặt”
		Tăng dần nghiêm ngặt : Chữ số đằng sau bắt buộc phải lớn hơn đằng trước.Vd : 123456
		Tăng dần không nghiêm ngặt : Chữ số đằng sau có thể >= chữ số đằng trước.Vd : 1122334566
	_getch;*/
	int n;
	do {
		printf("\nMoi nhap n:");
		scanf_s("%d", &n);
		if (n <= 0) {
			printf("\nGia tri n khong hop le . vui long nhap lai");

		}
	} while (n <= 0);

	int Temp = n;// lưu biến phụ 
	int soDaoNguoc = 0 ;
	int dem = log10((double)Temp);
	while (Temp != 0) {
		int chuSo = Temp % 10;
		Temp /= 10;
		soDaoNguoc += chuSo * pow(10.0, dem--);


	}
	printf("\nSo dao nguoc cua %d la %d ", n, soDaoNguoc);
	if (n == soDaoNguoc) {
		printf("\nLa so doi xung ");
	}
	else {
		printf("\nKhong phai la so doi xung ");
	}
	// kiểm tra sô chính phương 
	if (sqrt((double(n) )) == (int )sqrt((double )n)) {
		printf("\nLa so chính phuong  ");
	}
	else {
		printf("\nKhong phai la so chinh phuong  ");
	}

	// kiểm tra số nguyên tố 
	if (n < 2) {
		printf("\nKhong phai la so nguyen to ");
	}else{
		int Check = 1;// tượng trưng cho true 
		for (int i = 2; i < n; i++) {
			if (n % i == 0) {
				Check = 0;// false 
				break;
			}
		}
		if (Check == 1) {
			printf("\nLa so nguyen to ");
		}
		else {
			printf("\nKhong phai la so nguyen to ");
		}
	}

	/*d.Các chữ số có tăng dần hay giảm dần không ?
		Lưu ý ở chỗ này cần phải phân biệt rõ ràng giữa tăng dần “nghiêm ngặt” và “không nghiêm ngặt”
		Tăng dần nghiêm ngặt : Chữ số đằng sau bắt buộc phải lớn hơn đằng trước.Vd : 123456
		Tăng dần không nghiêm ngặt : Chữ số đằng sau có thể >= chữ số đằng trước.Vd : 1122334566*/
	int temp = n;
	int check = 1;// khởi tạo biến check làm cờ hiệu 
	int checkGiam = 1;// đặt cờ hiệu
	while (temp > 9) {// điền kiện lặp // 12345
		int chuSo1 = temp % 10;// số thứ nhất 5 
		temp /= 10;
		int chuSo2 = temp % 10;// số thứ hai  4
		if (chuSo1 <= chuSo2) {// hành động đây nha 
			check = 0;
			/*break;*/
		}
		if (chuSo1 >= chuSo2) {

			checkGiam = 0;
		}
	}
	if (check == 1) {
		printf("\nTang dan ");
	}
	else if (checkGiam == 1 ){
		printf("\nGiam dan ");
		
	}
	else {

		printf("\nKhong tang cung khong giam ");
	}
	 

	

		
	_getch;
	return 0;
}