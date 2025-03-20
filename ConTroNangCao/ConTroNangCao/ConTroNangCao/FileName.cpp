#include <stdio.h>
#include <conio.h>
#include <stdlib.h>


void NhapMang(int** a, int dong, int cot) {
	for (int i = 0; i < dong; i++) {
		for (int j = 0; j < cot; j++) {
			printf("\nNhap vao a[%d][%d]", i, j);
			scanf_s("\n", &a[i][j]);
			// Cach 2: scanf_s("%d",a[i] +j ); // khong co * de tro toi dia chi 
			// Cach 3: scanf_s("%d",*(a + i) + j);
		}
	}
}
void XuatMang(int** a, int dong, int cot) {
	for (int i = 0; i < dong; i++) {
		for (int j = 0; j < cot; j++) {
			printf("%4d", a[i][j]);
			// Cach 2: printf("%4d",*(a[i] + j)); // co * de lay ra gia tri cua dia chi tro toi 
			// Cach 3: printf("%4d",*(*(a + i) + j));
		}
		printf("\n");
	}
}
int main() {

	int dong = 2, cot = 3;
	int** a; // khai bao con tro cap 2

	// CAP PHAT BO NHO TRONG MANG 2 CHIEU 
	// Tao ra con tro de quan ly dau moi dong
	a = (int**)malloc(dong * sizeof(int));

	// voi nhung con tro quan ly dau moi dong lai tao ra cac phan tu ben trong no 
	for (int i = 0; i < dong; i++) {
		a[i] = (int*)malloc(cot * sizeof(int));
	}

	// Xu li 
	NhapMang(a, dong, cot);
	XuatMang(a, dong, cot);

	// giai phong bo nhow
	// giai phong tung phan tu ben trong moi dong 
	for (int i = 0; i < dong; i++) {
		free(a[i]);
	}
	// giai phong tat ca con tro quan li dau moi dong
	free(a);

	_getch();
	return 0;
}