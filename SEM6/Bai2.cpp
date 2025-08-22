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

    int sum = 0, count = 0;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0 && arr[i] % 2 != 0){
            sum = sum + arr[i];
            count++;
        }
    }

    if (count > 0) {
        printf("TBC cac so le o vi tri chan = %.2f\n", (float)sum / count);
    } else {
        printf("Khong co so le o vi tri chan\n");
    }
}

