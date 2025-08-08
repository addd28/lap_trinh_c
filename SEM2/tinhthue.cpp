#include <stdio.h>
int main(){
    float L, T = 0, x;
    printf("Nhap luong: ");
    scanf("%f", &L);

    if (L <= 11) {
        printf("Ban khong duoc dong thue");
    } else {
        x = L - 11;
        if (x <= 5)
            T = x * 0.05;
        else if (x <= 10)
            T = 5 * 0.05 + (x - 5) * 0.10;
        else if (x <= 18)
            T = 5 * 0.05 + 5 * 0.10 + (x - 10) * 0.15;
        else if (x <= 32)
            T = 5 * 0.05 + 5 * 0.10 + 8 * 0.15 + (x - 18) * 0.20;
        else if (x <= 52)
            T = 5 * 0.05 + 5 * 0.10 + 8 * 0.15 + 14 * 0.20 + (x - 32) * 0.25;
        else if (x <= 80)
            T = 5 * 0.05 + 5 * 0.10 + 8 * 0.15 + 14 * 0.20 + 20 * 0.25 + (x - 52) * 0.30;
        else
            T = 5 * 0.05 + 5 * 0.10 + 8 * 0.15 + 14 * 0.20 + 20 * 0.25 + 28 * 0.30 + (x - 80) * 0.35;
        printf("T phai nop: %f trieu VND", T);
    }
}

