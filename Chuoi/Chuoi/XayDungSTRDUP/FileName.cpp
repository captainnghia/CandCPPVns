#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int STRLEN(char* s) {
	int dem = 0;
	while (s[dem++] != '\0') {

	}
	return dem - 1;
}

void STRCPY(char* s1, char* s2) {
	// gan tung ki tu tu s2 sang s1
	int length_s2 = STRLEN(s2);
	for (int i = 0; i < length_s2; i++) {
		s1[i] = s2[i];
	}
	s1[length_s2] = '\0';
}

char* STRDUP(char* s) {
	int length = STRLEN(s);
	char* p = (char*)malloc(length + 1);// cap phat bo nho vua du 
	STRCPY(p, s);// gan s sang p
	return p;
}
int main() {

	char s1[] = "Minh Nghia";
	char* s2 = STRDUP(s1);
	printf("\ns2 = %s", s2);

	free(s2);

	_getch();
	return 0;
}