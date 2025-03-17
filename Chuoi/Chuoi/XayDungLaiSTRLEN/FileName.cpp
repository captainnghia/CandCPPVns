#include <stdio.h>
#include <conio.h>

int STRLEN(char* s) {
	int dem = 0;
	while (s[dem++] != '\0') {

	}
	return dem - 1;
}
int main() {

	char s[] = "Minh Nghia";
	int length = STRLEN(s);
	printf("\nDo dai la: %d", length);

	_getch();
	return 0;
}