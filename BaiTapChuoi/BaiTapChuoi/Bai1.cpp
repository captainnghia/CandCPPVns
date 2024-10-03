#include <stdio.h>
#include <conio.h>
#include <string.h>

//char* BienDoiThanhThuong(char* s) {
//	
//	char *p = _strdup(s);
//	
//	_strlwr(p);
//	return p;
//}

//char* BienDoiThanhHoa(char* s) {
//
//	char* p = _strdup(s);
//
//	_strupr(p);
//	return p;
//}
void XoaKiTu(char* s, int vitrixoa) {
	
	int length = strlen(s);

	for (int i = vitrixoa + 1; i < length; i++) {
		s[i - 1] = s[i];
	}
	s[length - 1] = '\0';
	
}
//Bài 4: Viết hàm nhận vào một chuỗi s và đếm
//xem có bao nhiêu từ trong chuỗi đó

int DemSoTu(char* s) {
	int dem;
	if (s[0] == ' ') {
		dem = 0;
	}
	else {
		dem = 1;

	}
	int length = strlen(s);
	for (int i = 0; i < length - 1; i++)
	{
		if (s[i] == ' ' && s[i + 1] != ' ') {
			dem++;
		}
	}
	return dem;
}
//Bài 5: Viết hàm nhận vào một chuỗi s và xuất
//các từ trên các dòng liên tiếp
void XuatTutrenDong(char* s) {
	int start , end;
	int length = strlen(s);// độ dài của chuỗi 
	if (s[0] != ' ') {
		start = 0;;
	}
	// tìm bắt đầu 
	int i;
	for ( i = 0; i < length - 1; i++) {
		if (s[i] == ' ' && s[i + 1] != ' ') {
			start = i;
		}
	}
	if (start != -1) {
		for (int j = start + 1; j < length - 1; j++) {
			if (s[j] != ' ' && s[j + 1] == ' ') {
				end = j;
				i = j;
				break;

			}
		}	
		// in ra các kí tự 
		for (int k = start; k <= end; k++) {
			printf("%c", s[k]);
		}
		printf("\n");
	}

}
//Bài 6: Viết hàm tìm từ có chiều dài lớn nhất và
//xuất ra màn hình từ đó và độ dài tương ứng.


//Bài 7 : Viết hàm trích ra n ký tự đầu tiên / cuối
//cùng / bắt đầu tại vị trí pos của chuỗi s cho trước.

int main() {
	char s[] = "   Nghia kute  hhh ";

	char p[30];
	XuatTutrenDong(s);
	/*int sotu = DemSoTu(s);
	printf("\nSo tu la = %d", sotu);*/

	/*XoaKiTu(s, 0);
	printf("\ns = %s", s);*/
		
	/*strcpy_s(p, BienDoiThanhHoa(s));
	printf("\ns = %s", s);
	printf("\np = %s", p);*/
		_getch();
		return 0;
}
