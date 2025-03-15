#include <stdio.h>
#include <conio.h>
#include <string.h>

void XuatTuTrenDong(char* s) {
	int start = -1, end;
	int length = strlen(s);

	if (s[0] == ' ') {
		start = 0;
	}
	int DoDaiMax = 0;
	int StartMax, EndMax;
	for (int i = 0; i < length - 1; i++) {
		// tìm bắt đầu 
		if (s[i] == ' ' && s[i + 1] != ' ') {
			start = i;
		}

		// đã có vị trí bắt đầu 
		if (start != -1) {
			// tu vi tri bat dau duyet tiep tuc
			for (int j = start + 1; j < length - 1; j++) {
				if (s[j] != ' ' && s[j + 1] == ' ') {
					end = j;
					i = j;// cap nhat lai vi tri duyet
					break;
				}
			}
			// in ra cac ki tu trong doan tu start -> end
			/*for (int k = start; k <= end; k++) {
				printf("%c", s[k]);
			}*/

			if (end - start + 1 > DoDaiMax) {
				DoDaiMax = end - start + 1;
				StartMax = start;
				EndMax = end;
			}
			printf("\n");
		}
	}
	printf("\nDo dai lon nhat la: %d", DoDaiMax);
	printf("\nChuoi la: ");
	for (int k = StartMax; k <= EndMax; k++) {
		printf("%c", s[k]);
	}
}
int main() {

	char s[] = " Nguyen minh nghia cu te vai ca lon ";
	XuatTuTrenDong(s);

	_getch();
	return 0;
}