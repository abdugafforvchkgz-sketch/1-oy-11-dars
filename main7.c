#include <stdio.h>

int main() {
    int n, r;
    int jami = 0, juft = 0, toq = 0, sum = 0;

    printf("Musbat son kiriting: ");
    scanf("%d", &n);

    while(n > 0) {
        r = n % 10;

        jami++;

        if(r % 2 == 0) {
            juft++;
        }
        else {
            toq++;
        }

        sum += r;
        n = n / 10;
    }

    printf("Raqamlar soni: %d", jami);
    printf("\nJuft raqamlar: %d", juft);
    printf("\nToq raqamlar: %d", toq);
    printf("\nYigindi: %d", sum);

    return 0;
}