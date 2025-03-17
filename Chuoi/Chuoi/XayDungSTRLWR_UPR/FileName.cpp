#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int STRLEN(char* s) {
	int dem = 0;
	while (s[dem++] != '\0') {

	}
	return dem - 1;
}

void STRLWR(char* s) {
	int length = STRLEN(s);

	for (int i = 0; i < length; i++) {
		if (s[i] >= 'A' && s[i] <= 'Z') {
			s[i] += 32;
		}
	}
}

void STRUPR(char* s) {
	int length = STRLEN(s);

	for (int i = 0; i < length; i++) {
		if (s[i] >= 'a' && s[i] <= 'z') {
			s[i] -= 32;
		}
	}
}
int main() {
	// nho nguyen tac: hoa sang thuong => lay ky tu + 32
	// thuong sang hoa => lay ky tu -32

	char s1[] = "Minh Nghia";
	
	STRLWR(s1);
	printf("\ns1 = %s", s1);

	STRUPR(s1);
	printf("\ns1 = %s", s1);

	_getch();
	return 0;
}