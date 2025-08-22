#include <stdio.h>
int main(){
    int n, i, tong = 0;
    printf("Nhap so nguyen duong n: ");
    scanf("%d", &n);

    printf("Cac uoc cua %d la: ", n);
    for (i = 1; i <= n; i++) {
        if (n % i == 0) {
            printf("%d ", i);
            tong += i;
        }
    }
    printf("\nTong cac uoc: %d\n", tong);
}

