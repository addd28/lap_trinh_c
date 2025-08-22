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

    int min = -1, gt = arr[0];
    for (int i = 0; i < n; i++) {
        int kc = arr[i] - x;
        if (kc < 0) kc = -kc;

        if (min == -1 || kc < min) {
            min = kc;
            gt = arr[i];
        }
    }
    printf("Gia tri gan %d nhat la %d\n", x, gt);
}

