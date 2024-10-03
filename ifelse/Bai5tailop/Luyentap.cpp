#include <stdio.h>
int main() {
    int a, b, c;
    int Min, Max;
    scanf_s("%d%d%d", &a, &b, &c);
    if (Max < a) {
        Max = a;
    }
    if (Max < b) {
        Max = b;
    }
    if (Max < c) {
        Max = c;
    }
    printf("%d", Max);

    return 0;
}