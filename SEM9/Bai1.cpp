#include <stdio.h>
int tongCS(int n){
    int sum = 0;
    if (n < 0) {
        n = -n;
    }
    while (n > 0) {
        sum = sum + (n % 10);
        n = n / 10;
    }
    return sum;
}

int UCLN(int a, int b) {
    int ucln = 1;
    int min;
    if (a < b) {
        min = a;
    } else {
        min = b;
    }
    for (int i = 1; i <= min; i++) {
        if (a % i == 0 && b % i == 0) {
            ucln = i;
        }
    }
    return ucln;
}

int BCNN(int a, int b) {
    int max;
    if (a > b) {
        max = a;
    } else {
        max = b;
    }
    int bcnn = max;
    while (1) {
        if (bcnn % a == 0 && bcnn % b == 0) {
            return bcnn;
        }
        bcnn++;
    }
}

int tinhMu(int x, int y) {
    int result = 1;
    for (int i = 0; i < y; i++) {
        result = result * x;
    }
    return result;
}

int daoNguoc(int n) {
    int rev = 0;
    while (n != 0) {
        int digit = n % 10;
        rev = rev * 10 + digit;
        n = n / 10;
    }
    return rev;
}

int tongCSDuong(int n) {
    int sum = 0;
    while (n > 0) {
        sum = sum + (n % 10);
        n = n / 10;
    }
    return sum;
}

int timMax(int arr[], int n) {
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int timMin(int arr[], int n) {
    int min = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}


int main() {
    int n = 12345;
    printf("1. Tong cac chu so cua %d = %d\n", n, tongCS(n));

    int a = 24, b = 36;
    printf("2. UCLN(%d,%d) = %d\n", a, b, UCLN(a, b));
    printf("3. BCNN(%d,%d) = %d\n", a, b, BCNN(a, b));

    printf("4. %d^%d = %d\n", 2, 6, tinhMu(2, 6));

    printf("5. Dao nguoc so %d = %d\n", 1234, daoNguoc(1234));

    printf("6. Tong chu so cua so duong %d = %d\n", 987, tongCSDuong(987));

    int arr[5] = {23, 90, 9, 25, 16};
    printf("7. Max = %d\n", timMax(arr, 5));
    printf("8. Min = %d\n", timMin(arr, 5));
}

