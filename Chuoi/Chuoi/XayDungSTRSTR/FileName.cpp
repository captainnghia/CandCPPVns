#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int STRLEN(char* s) {
	int dem = 0;
	while (s[dem++] != '\0') {

	}
	return dem - 1;
}

// tra ve vi tri tim thay 
int STRSTR(char* s, char* key) {
	int length_s = STRLEN(s);
	int length_key = STRLEN(key);
	//// duyet qua chuoi dang chua chuoi can tim
	for (int i = 0; i < length_s; i++) {
		if (s[i] == key[0]) {
			int k = 1;
			int Check = true;
			int temp = i + 1;
			for (int j =  1; j < length_key; j++) {
				if (s[temp++] != key[j]) {
					Check = false;
					break;
				}
			}
			if (Check = true) {
				return i;// vi tri tim thay dau tien
			}
		
		}
	}
	return -1;
}
int main() {


	char s1[100] = "Minh Nghia dep trai tai hoa vai ca lon ";
	char key[] = "dep tai lang tu tai hoa";

	int vitri = STRSTR(s1, key);
	if (vitri == - 1) {
		printf("\nKhong tim thay key ");
	}
	else {
		printf("\nTim thay tai vi tri %d ", vitri);
	}

	_getch();
	return 0;
}