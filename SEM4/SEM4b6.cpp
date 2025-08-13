#include <stdio.h>
int main(){
    int n;
    do {
        printf("Nhap so nguyen duong n: ");
        scanf("%d", &n);
    } while (n < 0);

    if (n == 0) {
        printf("So thu %d trong day Fibonacci la: 0\n", n);
    } else if (n == 1) {
        printf("So thu %d trong day Fibonacci la: 1\n", n);
    } else {
        int f_truoc1 = 0;
        int f_truoc2 = 1; 
        int fn = 1;      

        for (int i = 2; i <= n; i++) {
            fn = f_truoc1 + f_truoc2;
            f_truoc1 = f_truoc2;
            f_truoc2 = fn;
        }
        printf("So thu %d trong day Fibonacci la: %d\n", n, fn);
    }
}

