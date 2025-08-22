#include <stdio.h>
int main(){
    int n, x;
    printf("Nhap so phan tu n: ");
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }

    printf("Nhap x: ");
    scanf("%d", &x);

    int mD = -1, gt = arr[0];
    for (int i = 0; i < n; i++) {
        int chenh = arr[i] - x;
        if (chenh < 0) chenh = -chenh;

        if (chenh > mD) {
            mD = chenh;
            gt = arr[i];
        }
    }
    printf("Gia tri xa %d nhat la %d\n", x, gt);
}

