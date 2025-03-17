#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int STRLEN(char* s) {
	int dem = 0;
	while (s[dem++] != '\0') {

	}
	return dem - 1;
}

void STRCAT(char* s1, char* s2) {
	int length_s1 = STRLEN(s1);
	int length_s2 = STRLEN(s2);

	for (int i = 0; i < length_s2; i++) {
		s1[length_s1++] = s2[i];
	}
	s1[length_s1] = '\0';
}
int main() {


	char s1[100] = "Minh Nghia";
	char s2[] = "dep tai lang tu tai hoa";

	STRCAT(s1, s2);
	printf("\ns1 = %s", s1);

	_getch();
	return 0;
}