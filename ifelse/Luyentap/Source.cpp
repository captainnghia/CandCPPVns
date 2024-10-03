#include <stdio.h>
#include <conio.h>
#include <math.h>
int main() {
   
    /*int a = sc.nextInt();
    int b = sc.nextInt();
    if (a == 0) {
        System.out.println(b);
    }
    else if (b == 0) {
        System.out.println(a);
    }
    else {
        int r;
        a = Math.abs(a);
        b = Math.abs(b);
        while (b != 0) {
            r = a % b;
            a = b;
            b = r;
        }
        System.out.println(a);
    }*/
    int a, b;
    scanf_s("%d %d", &a, &b);
    if (a == 0) {
        printf("%d", b);

    }
    else if (b == 0) {
        printf("%d", a);

    }
    else {
        int c;
        
        a = abs(a);
        b = abs(b);
        while (b != 0) {
            c = a % b;
            a = b;
            b = c;
        }
       
        printf("%d", a);
    }
        _getch;
        return 0;
    }
