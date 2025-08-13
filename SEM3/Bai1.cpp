#include <stdio.h>
int main(){
    int ngay, thang, nam;
    int ngay_trong_thang; 
    int ngay_trong_nam = 0;
    int thang_dem = 1; 

    printf("Nhap ngay: ");
    scanf("%d", &ngay);
    printf("Nhap thang: ");
    scanf("%d", &thang);
    printf("Nhap nam: ");
    scanf("%d", &nam);

    while (thang_dem < thang) {
        if (thang_dem == 1 || thang_dem == 3 || thang_dem == 5 || 
            thang_dem == 7 || thang_dem == 8 || thang_dem == 10 || thang_dem == 12) {
            ngay_trong_thang = 31;
        } 
        else if (thang_dem == 4 || thang_dem == 6 || thang_dem == 9 || thang_dem == 11) {
            ngay_trong_thang = 30;
        } 
        else {
            if ((nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0))
                ngay_trong_thang = 29;
            else
                ngay_trong_thang = 28;
        }
        ngay_trong_nam += ngay_trong_thang; 
        thang_dem++; 
    }
    ngay_trong_nam += ngay;
    printf("Ngay %d/%d/%d la ngay thu %d trong nam.\n", ngay, thang, nam, ngay_trong_nam);
}

