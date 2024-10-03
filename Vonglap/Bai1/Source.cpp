#include <stdio.h>
#include <conio.h>
// khi thực hiện một phép toán gì gì đó thì ta phải khởi tạo cho nó nhé 
// nhớ nhé 
int main() {
	//công thức tổng quát s(n) = s(n-1)+n 
	/*a. n>= 1 */
	int n; // khai báo 
	do{
		printf("\nMoi nhap vao n " );
		scanf_s("%d", &n);
		if (n < 1) {
			printf("\nVui long nhap lai . N phai lon hon hoac bang 1. vui long kiem tra lai .");
		}
	} while (n < 1);// điều kiện lặp 
	/*a.S = 1 + 2 + … + n */
	int Sa = 0;/* khởi tạo một biến để có tổng nhé */
	//for (int i = 1; i <= n; i++) {
	//	Sa = Sa + i;
	//}// chạy từ 1 đến n 
	

// sử dụng câu lệnh goto 
	int i = 1;// sử dụng goto là mình phải khởi tạo trước 
nghiacute:
	Sa += i;
	if (i < n){
		i++;
		printf("\nTong la :%d", Sa);
		goto nghiacute;
		// khi sử dụng goto thì hành động sẽ ở sau chỗ khởi tạo 
		
	}

	/*b.S = 1 ^ 2 + 2 ^ 2 + … + n ^ 2*/
	int Sb = 0;
	for (int i = 1; i <= n; i ++) {
		Sb = Sb + i * i;
		/*bình phương thì bằng i * i hoi */
	
	}
	printf("\nTong la :%d", Sb);

	/*c.S = 1 + 1 / 2 + … + 1 / n*/
	float Sc = 0;
	for (int i = 1; i <= n; i++) {
		Sc = Sc + 1.0 / i;
		
	}
	printf("\nTong la :%f", Sc);

	/*d.S = 1 * 2 * … * n = n!*/
	int Sd = 1;
	for (int i = 1; i <= n; i++) {
		Sd = Sd * i;
		
	}
	printf("\nTong la %d", Sd);


	/*e.S = 1!+ 2!+ … + n!*/
	//int Se = 0;
	//for (int i = 1 ; i <= n ;i++){

	//	int Tich = 1;
	//	for (int j = 1; j <= i; j++) {
	//		Tich *= j;
	//	}
	//	/*trước khi gán qua Se thì vòng con đã chạy rồi */
	//	Se += Tich;
	//}
	int Se = 0;
	int Tich = 1;
	for (int i = 1; i <= n; i++) {

		
		Tich *= i;
		Se += Tich;
	}
	printf("\nTong se%d ", Se);

	_getch;
	return 0;
}