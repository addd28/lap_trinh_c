#include <stdio.h>
int main(){
    int a, b, i, min, ucln = 1, bcnn;
    printf("Nhap b: ");
    scanf("%d", &b);
    printf("Nhap a: ");
    scanf("%d", &a);

    if (a < b) {
        min = a;
    } else {
        min = b;
    }

    for (i = 1; i <= min; i++) {
        if (a % i == 0 && b % i == 0) {
            ucln = i;
        }
    }

    bcnn = (a * b) / ucln;

    printf("UCLN = %d\n", ucln);
    printf("BCNN = %d\n", bcnn);
}

