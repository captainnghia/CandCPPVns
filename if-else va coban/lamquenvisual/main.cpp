#include <stdio.h>// thư viện nhap xuat chuan 
#include <conio.h>// thư vien chua getch( ) dung man hinh 
int main() {
	// khai bao bien 
	int namsinh, namhientai, tuoi;
	printf("\nMoi ban nhap nam sinh :");
	scanf("%d", &namsinh);
	namhientai = 2023;
	//  buoc 2 : tính tuoi 
	tuoi = namhientai - namsinh;
	// buoc 3: xuat ket qua 
	printf("\nBan sinh nam %d => Ban %d tuoi!", namsinh, tuoi);

	getch();
	return 0;
}
