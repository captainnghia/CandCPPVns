
//Từ 1 kí tự số mà muốn chuyển sang số tương ứng thì lấy kí tự số đó - 48
//vd: '1' - 48 = 1
//
//Từ 1 sôs nguyene mà muốn chuyển sang kí tự số tương ứng thì lấy số nguyên đó + 48
//vd : 1 + 48 = '1'

#include <stdio.h>
#include <conio.h>
#include <math.h>

int STRLEN(char* s) {
	int dem = 0;
	while (s[dem++] != '\0') {}
	return dem - 1;
}

int ATOI(char* s) {
	int length = STRLEN(s);

	int temp = length - 1;
	int number = 0;
	for (int i = 0; i < length; i++) {
		number += (s[i] - 48) * pow(10.0, temp--);
	}
	return number;
}
int main() {

	/*char s[] = "Nguyen Minh Nghia";
	int length = STRLEN(s);
	printf("\nDo dai chuoi la %d", length);*/

	char s[] = "12345";
	int number = ATOI(s);
	printf("\nNumber = %d", number);


	_getch();
	return 0;
}