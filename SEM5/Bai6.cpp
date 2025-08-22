#include <stdio.h>
int main(){
    int n, ok = 1;
    printf("Nhap n: ");
    scanf("%d", &n);

    if (n < 0) {
        n = -n;
    }

    while (n > 0) {
        int dg = n % 10;
        if (dg % 2 == 0) {
            ok = 0;
            break;
        }
        n = n / 10;
    }

    if (ok == 1) {
        printf("So nay co toan chu so le\n");
    } else {
        printf("So nay ko co toan chu so le\n");
    }
}

