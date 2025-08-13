#include <stdio.h>

int main() {
    int n, i=0;
    printf("Nhap n: ");
    scanf("%d", &n);

    //int i = n - 1;
    int m;
   // while (i > 0) {
   while (i<n){
        if (i % 6 == 0) {
            //printf("So lon nhat nho hon %d va chia het cho 2 va 3 la: %d\n", n, i);
            m=i;
        }
        //i--;
        i++;
    }
                printf("So lon nhat nho hon %d va chia het cho 2 va 3 la: %d\n", n, m);
}

