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

    int found = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            found = 1;
            break;
        }
    }

    if (found == 1) {
        printf("%d co trong mang\n", x);
    } else {
        printf("%d ko co trong mang\n", x);
    }
}

