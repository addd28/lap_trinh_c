#include <stdio.h>
int main(){
    int n;
    printf("Nhap n = ");
    scanf("%d", &n);

    int player[n];
    for (int i = 0; i < n; i++) {
        printf("player[%d] = ", i);
        scanf("%d", &player[i]);
    }

    int k;
    printf("Nhap k = ");
    scanf("%d", &k);

    k = k % n;

    for (int i = 0; i < k; i++) {
        int temp = player[0];
        for (int j = 0; j < n - 1; j++) {
            player[j] = player[j + 1];
        }
        player[n - 1] = temp;
    }

    printf("Mang sau khi xoay trai: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", player[i]);
    }
    printf("\n");
}

