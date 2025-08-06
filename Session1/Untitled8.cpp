#include <stdio.h>
#include <math.h>
int main(){
    float a, b, c;
    float delta, x1, x2;

    printf("Nhap a: ");
    scanf("%f", &a);
    printf("Nhap b: ");
    scanf("%f", &b);
    printf("Nhap c: ");
    scanf("%f", &c);

    if (a == 0) {
        if (b == 0) {
            if (c == 0) {
                printf("Phuong trinh co vo so nghiem");
            } else {
                printf("Phuong trinh vo nghiem");
            }
        } else {
            x1 = -c / b;
            printf("Phuong trinh bac nhat co nghiem x = %f", x1);
        }
    } else {
        delta = b * b - 4 * a * c;
        if (delta > 0) {
            x1 = (-b + sqrt(delta)) / (2 * a);
            x2 = (-b - sqrt(delta)) / (2 * a);
            printf("Phuong trinh co 2 nghiem phan biet:");
            printf("x1 = %f", x1);
            printf("x2 = %f", x2);
        } else if (delta == 0) {
            x1 = -b / (2 * a);
            printf("Phuong trinh co nghiem kep x = %f", x1);
        } else {
            printf("Phuong trinh vo nghiem vi delta < 0");
        }
    }
}
