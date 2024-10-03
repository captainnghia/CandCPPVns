#include <stdio.h>
#include <conio.h>
#include <math.h>
int main() {
	/*Nhập vào 1 số nguyên dương n, đếm xem n có
		bao nhiêu chữ số, tìm ra chữ số lớn nhất, chữ
		số nhỏ nhất.
		Vd: n = 216935
		Có 6 chữ số
		Chữ số Min = 1, Chữ số Max = 9*/
	int n;
	do {
		printf("\nNhap vao 1 so nguyen duong ");
		scanf_s("%d", &n);
		if (n < 0) {
			printf("\nVui long nhập lại ");

		}

	} while (n<0);//đây là điều kiện lặp lại 
	// đếm số chữ số dùng công thức log 10 + 1 hoặc dùng vòng lặp 
	// cách này dở 
	int dem = 0;
	int temp = n;// tạo biến temp lưu giá trị n sang 
	//while (temp != 0){
	//	//n = n / 10;// liên tục chia n cho 10 
	//	temp = temp / 10;

	//	dem++;

	//}
	if (dem == 0) {
		dem = 1;
	}
	else {
		dem = log10((double)n) + 1;
	}
	
	printf("\nSo %d co %d chu so ", n, dem);

	int Max, Min;
	Max = Min = temp % 10;// đặt max = min = số cuối 
	temp /= 10;// bỏ số cuối 
	while (temp != 0) {

		int chuSo = temp % 10;// lấy chữ số cuối 
		temp /= 10;// loại chữ số cuối 

		if (chuSo > Max) {
			Max = chuSo;

		}
		if (chuSo < Min) {
			Min = chuSo;

		}


	}
	printf("\nChu so Max la : %d va chu so Min la %d ", Max, Min);


	_getch;
	return 0;
}
