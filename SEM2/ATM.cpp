#include <stdio.h>
int main(){
    int tien, s500 = 0, s200 = 0, s100 = 0, s50 = 0, s20 = 0, s10 = 0;
    printf("Nhap so tien can rut (boi so 10000): ");
    scanf("%d", &tien);

    s500 = tien / 500;
    tien %= 500;

    s200 = tien / 200;
    tien %= 200;

    s100 = tien / 100;
    tien %= 100;

    s50 = tien / 50;
    tien %= 50;

    s20 = tien / 20;
    tien %= 20;

    s10 = tien / 10;

    printf("500.000: %d \n", s500);
    printf("200.000: %d \n", s200);
    printf("100.000: %d \n", s100);
    printf(" 50.000: %d \n", s50);
    printf(" 20.000: %d \n", s20);
    printf(" 10.000: %d \n", s10);
}

