#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int STRLEN(char* s) {
	int dem = 0;
	while (s[dem++] != '\0') {

	}
	return dem - 1;
}

void HoanVi(char& x, char& y) {
	char Temp = x;
	x = y;
	y = Temp;
}
void STRREV(char* s) {
	int length = STRLEN(s);
	for (int i = 0; i < length / 2; i++) {
		HoanVi(s[i], s[length - 1 - i]);
	}
}
int main() {


	char s1[] = "Minh Nghia";
	STRREV(s1);
	printf("\ns1 = %s", s1);
	
	_getch();
	return 0;
}