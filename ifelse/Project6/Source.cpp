#include <stdio.h>
#include <conio.h>
int main() {
	/*bài 6 nha 
		-----65A-----Z-------a97--------z--------->*/
	char kyTu;
	printf("\nMoi nhap vao ki tu:");
	scanf_s("%c", &kyTu);
	if (kyTu >= 'a' && kyTu <= 'z' || kyTu >= 'A' && kyTu <= 'Z') {
		if (kyTu >= 'a' && kyTu <= 'z') {
			kyTu -= 32;
		}
		else {
			kyTu += 32;
		}
		printf("\nKy tu sau khi bien doi la %c ", kyTu);
	}
	else {
		printf("\nKi tu khong hop le");
	}

	_getch;
	return 0;

}