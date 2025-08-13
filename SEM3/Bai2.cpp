#include <stdio.h>
int main(){
    int a, b;
    int kc_a, kc_b; 

    printf("Nhap so thu nhat: ");
    scanf("%d", &a);
    printf("Nhap so thu hai: ");
    scanf("%d", &b);

    if (a >= 10)
        kc_a = a - 10;
    else
        kc_a = 10 - a;

    if (b >= 10)
        kc_b = b - 10;
    else
        kc_b = 10 - b;

    if (kc_a < kc_b)
        printf("%d gan so 10 hon\n", a);
    else if (kc_b < kc_a)
        printf("%d gan so 10 hon\n", b);
    else
        printf("Bang nhau\n");
}

