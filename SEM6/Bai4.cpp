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

    int soLeCuoi = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 != 0) {
            soLeCuoi = arr[i];
        }
    }

    if (soLeCuoi != -1) {
        printf("So le cuoi cung la %d\n", soLeCuoi);
    } else {
        printf("Mang khong co so le\n");
    }
}

