#include <stdio.h>
#include <math.h>
#include <conio.h>
int main() {
    // nhập a, b . Tìm min max 
    int a, b;
    printf("\nNhap a :");
    scanf_s("%d", &a);
    printf("\nNhap b :");
    scanf_s("%d", &b);
    int Min, Max;
    //c1: dùng toán tử 3 ngôi 
    // tính toán rồi in ra 
    //Min = a < b ? a : b;
    //Max = a > b ? a : b;
    // c2: dùng biểu thức điều kiện 
    if (a > b) {
        // tính toán 
        Max = a;
        Min = b;

    }
    else {
        Max = b;
        Min = a;
    }
    printf(" \nMin = %d và Max = %d ", Min, Max);


    _getch;
   return 0;
}