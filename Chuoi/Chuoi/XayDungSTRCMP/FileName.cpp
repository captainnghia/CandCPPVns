#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int STRLEN(char* s) {
	int dem = 0;
	while (s[dem++] != '\0') {

	}
	return dem - 1;
}


int STRCMP(char* s1, char* s2) {
	int Min = STRLEN(s1) < STRLEN(s2) ? STRLEN(s1) : STRLEN(s2);
	int i;
	for ( i = 0; i < Min; i++) {
		if (s1[i] < s2[i]) {
			return -1;
		}
		else if (s1[i] > s2[i]) {
			return 1;
		}
	}
	if (s1[i] == '\0') {
		if (s2[i] == '\0') {
			return 0;
		}
		else
			return -1;
	}
	if (s2[i] == '\0') {
		if (s1[i] == '\0') {
			return 0;
		}
		else
			return -1;
	}

}
int main() {


	char s1[] = "Minh Nghia";
	char s2[] = "Minh";

	int ketqua = STRCMP(s1, s2);
	printf("\nKet qua = %d", ketqua);

	_getch();
	return 0;
}