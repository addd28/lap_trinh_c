#include <stdio.h>
int main(){
    int ngay, thang, nam, CT, namNhuan;
    printf("Nhap ngay: ");
    scanf("%d", &ngay);
    printf("Nhap thang: ");
    scanf("%d", &thang);
    printf("Nhap nam: ");
    scanf("%d", &nam);

    if ((nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0)) {
        namNhuan = 1;
    } else {
        namNhuan = 0;
    }
    if (thang == 1 || thang == 3 || thang == 5 || thang == 7 || thang == 8 || thang == 10 || thang == 12) {
        CT = 31;
    } else if (thang == 4 || thang == 6 || thang == 9 || thang == 11) {
        CT = 30;
    } else {
        if (namNhuan == 1) {
            CT = 29;
        } else {
            CT = 28;
        }
    }
    if (ngay < CT) {
        ngay++;
    } else {
        ngay = 1;
        if (thang < 12) {
            thang++;
        } else {
            thang = 1;
            nam++;
        }
    }
    printf("Ngay ke tiep: %d/%d/%d", ngay, thang, nam);
}

