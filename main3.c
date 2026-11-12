#include <stdio.h>

int main() {
    int n, raqam, sum = 0;

    printf("Son kiriting: ");
    scanf("%d", &n);

    while(n > 0) {
        raqam = n % 10;
        sum += raqam;
        n = n / 10;
    }

    printf("Raqamlar yig'indisi: %d", sum);

    return 0;
}