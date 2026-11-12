#include <stdio.h>

int main() {
    int tanlov, son;
    int jami = 0;

    while(1) {
        printf("\n1. Olma - 5000 som");
        printf("\n2. Banan - 12000 som");
        printf("\n3. Apelsin - 10000 som");
        printf("\n4. Hisobni korish");
        printf("\n5. Xaridni yakunlash");

        printf("\nTanlang: ");
        scanf("%d", &tanlov);

        switch(tanlov) {
            case 1:
                printf("Miqdor: ");
                scanf("%d", &son);
                jami += 5000 * son;
                break;

            case 2:
                printf("Miqdor: ");
                scanf("%d", &son);
                jami += 12000 * son;
                break;

            case 3:
                printf("Miqdor: ");
                scanf("%d", &son);
                jami += 10000 * son;
                break;

            case 4:
                printf("Jami: %d som", jami);
                break;

            case 5:
                printf("Yakuniy hisob: %d som", jami);
                return 0;

            default:
                printf("Notogri tanlov!");
        }
    }

    return 0;
}