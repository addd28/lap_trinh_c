#include <stdio.h>
int main(){
    int n;
    printf("Nhap so phan tu n: ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    int soDuong = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) {
            if (soDuong == -1 || arr[i] < soDuong) {
                soDuong = arr[i];
            }
        }
    }

    if (soDuong != -1) {
        printf("So duong nho nhat = %d\n", soDuong);
    } else {
        printf("Mang khong co so duong\n");
    }
}

