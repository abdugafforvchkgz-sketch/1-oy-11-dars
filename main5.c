#include <stdio.h>

int main() {
    int a, b;
    int uch = 0, besh = 0, ikkalasi = 0;

    printf("Boshlangich son: ");
    scanf("%d", &a);

    printf("Oxirgi son: ");
    scanf("%d", &b);

    for(int i = a; i <= b; i++) {

        if(i % 3 == 0 && i % 5 == 0) {
            printf("%d - ikkalasiga bolinadi\n", i);
            ikkalasi++;
        }
        else if(i % 3 == 0) {
            printf("%d - 3 ga bolinadi\n", i);
            uch++;
        }
        else if(i % 5 == 0) {
            printf("%d - 5 ga bolinadi\n", i);
            besh++;
        }
    }

    printf("\nFaqat 3 ga: %d ta", uch);
    printf("\nFaqat 5 ga: %d ta", besh);
    printf("\nIkkalasiga: %d ta", ikkalasi);

    return 0;
}