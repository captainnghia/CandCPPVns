#include <stdio.h>// thư viện nhap xuat chuan 
#include <conio.h>// thư vien chua getch( ) dung man hinh 
int main() {
	// khai bao bien 
	int namsinh, namhientai, tuoi;
	printf("\nMoi ban nhap nam sinh :");
	scanf_s("%d", &namsinh);
	namhientai = 2023;
	//  buoc 2 : tính tuoi 
	tuoi = namhientai - namsinh;
	// buoc 3: xuat ket qua 
	printf("\nBan sinh nam %d => Ban %d tuoi!", namsinh, tuoi);

	_getch;
	// trong vsc người ta sủ dụng scanf_s thay vì scanf và sử dụng _getch thay vi getch();

	return 0;
}
