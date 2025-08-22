#include <stdio.h>
int main(){
    int a, b;
    printf("Nhap a, b (a < b): ");
    scanf("%d %d", &a, &b);
    printf("Cac so nguyen to trong [%d, %d] la: ", a, b);

    for (int n = a; n <= b; n++) {
        if (n >= 2) {   
            int laNguyenTo = 1;
            for (int i = 2; i * i <= n; i++){
                if (n % i == 0) {
                    laNguyenTo = 0;
                    break;
                }
            }
            if (laNguyenTo == 1) {
                printf("%d ", n);
            }
        }
    }
    printf("\n");
}

