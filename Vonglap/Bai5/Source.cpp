#include <stdio.h>
#include <conio.h>
int main() {
	/*3. Tìm và in lên màn hình tất cả các số nguyên trong phạm vi từ 10 đến 99 sao cho tích của 2 chữ số
		bằng 2 lần tổng của 2 chữ số đó.Ví dụ : Số 44*/
	for (int i = 10; i < 100; i++) {
		int hangChuc = i / 10;
		int hangDonvi = i % 10;
		if (hangChuc * hangDonvi == 2 * (hangChuc + hangDonvi)) {

			printf("\n%d", i);
		}

	}

	_getch;
	return 0;
}