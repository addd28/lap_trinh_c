#include <stdio.h>
int main(){
    int n;
    do {
        printf("Nhap so nguyen duong n: ");
        scanf("%d", &n);
    } while (n <= 0);

    if (n == 1) {
        printf("So tiem can duoi voi %d la: 0\n", n);
    } else {
        int f1 = 0, f2 = 1;
        int fn = 1;

        while (fn < n) {
            f1 = f2;
            f2 = fn;
            fn = f1 + f2;
        }
        printf("So tiem can duoi voi %d la: %d\n", n, f2);
    }
}

