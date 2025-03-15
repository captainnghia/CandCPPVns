#include <stdio.h>
#include <conio.h>
#include <string.h>

char* SubString(char* s, int start, int count) {
	char p[30];
	int k = 0;
	for (int i = start; i < start + count; i++) {
		p[k++] = s[i];
	}
	return p;
}
int main() {
	char s[] = "Son handsome";
	char* p = _strdup(SubString(s, 4, 8));
	printf("\np = %s", p);

	_getch();
	return 0;
}