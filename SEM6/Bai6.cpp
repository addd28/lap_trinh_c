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

    int mD = 0, dL = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) {
            dL++;
            if (dL > mD) {
                mD = dL;
            }
        } else {
            dL = 0;
        }
    }
    printf("So luong so duong lien tiep nhieu nhat = %d\n", mD);
}

