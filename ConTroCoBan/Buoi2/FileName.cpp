#include <stdio.h>
#include <conio.h>

void HoanVi(int& a, int& b) {
	int Temp = a;
	a = b;
	b = Temp;
}
void HoanViCach2(int* a, int* b) {
	int Temp = *a; 
	*a = *b;
	*b = Temp;
}
int main() {

	int a = 1; int b = 2;

	int* c, * d;
	c = &a;
	d = &b;
	// dung tham chieu 
	//HoanVi(a, b);
	//HoanVi(*c, *d);


	// dung con tro
	//HoanViCach2(&a, &b);
	//HoanViCach2(c, d);

	printf("\na =%d & b = %d", a, b);

	_getch();
	return 0;
}