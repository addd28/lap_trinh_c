#include <stdio.h>
int main(){
    float giatien, giam;
    printf("Nhap gia tri mua hang: ");
    scanf("%f", &giatien);

    if (giatien >= 500)
        giam = giatien * 0.9;
    else if (giatien >= 200)
        giam = giatien * 0.95;
    else
        giam = giatien;
    printf("So tien phai tra: %f\n", giam);
}

