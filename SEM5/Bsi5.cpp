#include <stdio.h>
int main(){
    int n, max = 0, dg;
    printf("Nhap n: ");
    scanf("%d", &n);

    if (n < 0) {
        n = -n;
    }

    while (n > 0) {
        dg = n % 10;
        if (dg > max) {
            max = dg;
        }
        n = n / 10;
    }
    printf("Chu so lon nhat = %d\n", max);
}

