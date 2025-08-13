#include <stdio.h>
int main(){
    int n, i = 2, nguyen_to = 1;
    printf("Nhap n: ");
    scanf("%d", &n);

    if (n < 2) nguyen_to = 0;
    else {
        while (i * i <= n) {
            if (n % i == 0) {
                nguyen_to = 0;
            }
            i++;
        }
    }
    if (nguyen_to)
        printf("%d la so nguyen to\n", n);
    else
        printf("%d khong la so nguyen to\n", n);
}

