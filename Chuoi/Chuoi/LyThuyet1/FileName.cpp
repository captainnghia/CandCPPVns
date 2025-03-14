#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

int main() {

	char ten[] = "nguyen minh nghia";
	 
	int length = strlen(ten);
	printf("\nChuoi dai %d ki tu", length);

	// duyệt chuỗi ( đi từng kí tự)
	for (int i = 0; i < length; i++) {
		printf("\nten[%d] = %c", i, ten[i]); 
	}

	char ten2[30];
	//ten2 = ten; // gán sang ten2 là sai 
	strcpy_s(ten2, ten);

	char* ten3 = _strdup(ten);

	_strrev(ten3);
	printf("\nten3 = %s", ten3);

	printf("\nten2 = %s", ten2);

	char s1[] = "nghia";
	char s2[] = "linh";
	int ketqua = strcmp(s1, s2);
	printf("\nketqua = %d", ketqua);

	char ten4[30] = "nguyen";
	char ten5[30] = " minh nghia";

	strcat_s(ten4, ten5);
	printf("\nten4 = %s", ten4);

	char tensach[100] = "day con lam giau";
	char timkiem[] = "lam tinh hinh tot len";

	if (strstr(tensach, timkiem) != NULL) {
		printf("\nTim thay");
	}
	else {
		printf("\nKhong tim thay");
	}

	char s3[] = "1234";
	int so = atoi(s3);
	printf("\nso = %d", so);

	char s4[] = "123.4";
	double so1 = atof(s4);
	printf("\nso = %lf", so1);

	int so2 = 250;
	char s5[30];
	_itoa_s(so2, s5, 2);
	printf("\nHe 2 la: %s", s5);

	_itoa_s(so2, s5, 8);
	printf("\nHe 8 la: %s", s5);

	_itoa_s(so2, s5, 10);
	printf("\nHe 10 la: %s", s5);

	_itoa_s(so2, s5, 16);
	printf("\nHe 16 la: %s", s5);

	// strtok hỗ trợ cắt chuỗi 
	char chuoi[] = "Nghia, linh, Son";
	char* context;
	char* substr = strtok_s(chuoi, ",",&context);// con tro substr tro toi vung nho

	printf("\nsub = %s", substr);
	// có 5 chuỗi, mỗi chuỗi có tối đa 40 kí tự 
	char danhsach[5][40] = { "Nguyen Van a", "Nguyen Van b", "Nguyen Van c", "Nguyen Van d", "Nguyen Van e" };

	for (int i = 0; i < 5; i++) {
		printf("\n%s", danhsach[i]);
	}


	_getch();
	return 0;
}
