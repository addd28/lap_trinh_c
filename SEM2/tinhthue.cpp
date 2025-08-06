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
        else
            T = 5 * 0.05 + 5 * 0.10 + 8 * 0.15 + (x - 18) * 0.20;

        printf("Thue phai nop: %f trieu VND", T);
    }
}

