#include <stdio.h>
#include <conio.h>
#include <string.h>

int DemSoTu(char* s) {
	int dem;

	if (s[0] == ' ') {
		dem = 0;
	}
	else 
	{
		dem = 1;
	}

	int length = strlen(s);
	for (int i = 0; i < length - 1; i++) {
		if (s[i] == ' ' && s[i + 1] != ' ') {
			dem++;
		}
	}
	return dem;
}
int main() {

	char s[] = "Linh xi da";
	int sotu = DemSoTu(s);
	printf("\nso tu %d", sotu);

	_getch();
	return 0;
}