#include <stdio.h>
int main(){
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);

    if (n < 0) {
        n = -n;
    }

    while (n >= 10) {
        n = n / 10;
    }
    printf("Chu so dau tien la: %d\n", n);
}

