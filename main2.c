#include <stdio.h>

int main() {
    int h;
    int issiq = 0;

    for(int i = 1; i <= 7; i++) {
        printf("%d-kun haroratini kiriting: ", i);
        scanf("%d", &h);

        if(h > 30) {
            printf("Issiq\n");
            issiq++;
        }
        else if(h >= 15 && h <= 30) {
            printf("Iliq\n");
        }
        else {
            printf("Sovuq\n");
        }
    }

    printf("30 dan yuqori kunlar soni: %d", issiq);

    return 0;
}