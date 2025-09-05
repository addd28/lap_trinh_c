#include <stdio.h>

int kiemTraSoNT(int n) {
    if (n < 2){
	  return 0;
	 }
    for(int i = 2; i <= n/2; i++){
        if (n % i == 0){
		 return 0;
		 }
    }
    return 1;
}

int main() {
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++) {
        printf("Nhap a[%d]: ", i);
        scanf("%d", &a[i]);
    }

    int dem = 0;
    for (int i = 0; i < n; i++) {
        if (kiemTraSoNT(a[i])) {
            if (dem == 0) {
                printf("Cac so nguyen to trong mang: ");
            }
            printf("%d ", a[i]);
            dem++;
        }
    }

    if (dem == 0) {
        printf("No prime number");
    }
}

