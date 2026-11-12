#include <stdio.h>

int main() {
    int tanlov;
    int bosh = 20;

    while(1) {
        printf("\n1. Avtomobil kiritish");
        printf("\n2. Avtomobil chiqarish");
        printf("\n3. Bosh joylarni korish");
        printf("\n4. Dasturdan chiqish");

        printf("\nTanlang: ");
        scanf("%d", &tanlov);

        switch(tanlov) {

            case 1:
                if(bosh > 0) {
                    bosh--;
                    printf("Avtomobil kirdi!");
                }
                else {
                    printf("Bosh joy yoq!");
                }
                break;

            case 2:
                if(bosh < 20) {
                    bosh++;
                    printf("Avtomobil chiqdi!");
                }
                else {
                    printf("Avtoturargoh bosh!");
                }
                break;

            case 3:
                printf("Bosh joylar: %d ta", bosh);
                break;

            case 4:
                return 0;

            default:
                printf("Notogri tanlov!");
        }
    }

    return 0;
}