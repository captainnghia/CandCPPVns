#include <stdio.h>
#include <conio.h>

void A() {
	printf("\nDay la ham A");
}
void B() {
	printf("\nDay la ham B");
}

void C() {
	printf("\nDay la ham C");
}

int main() {

	/*A();
	B();
	C();*/

	// Khai bao con tro ham 
	void(*Pointer)();

	//Con tro ham tro toi ham A
	Pointer = &A;// co the rut gon bang cach Pointer = A

	// Goi thuc hien con troham 
	Pointer();

	_getch();
	return 0;
}


