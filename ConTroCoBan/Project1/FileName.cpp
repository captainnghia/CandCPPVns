//có 3 cach cấp phát con trỏ bên c 
//1. malloc 
//2. calloc 
//3. realloc 
#include <stdio.h>
#include <conio.h>
#include <stdlib.h> /// cap phat con tro 

int main() {

	int* b;
	// cap phat bo nho cho con tro 
	// malloc tao vung nhow con tro b tro toi vung nho do 
	b = (int *)malloc(sizeof(int));

	*b = 69;// sau khi tao vung nho xong thi gan duojc 

	printf("\n*b = %d", *b);

	free(b);// giai phong con tro 

	printf("\n*b = %d", *b);// khong in duoc 

	_getch();
	return 0;
}