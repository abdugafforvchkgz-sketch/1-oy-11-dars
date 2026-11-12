#include <stdio.h>

int main() {
    int baho;
    int a = 0, yaxshi = 0, qoniqarli = 0, qoniqarsiz = 0;

    for(int i = 1; i <= 15; i++) {

        printf("%d-oquvchi bahosi: ", i);
        scanf("%d", &baho);

        if(baho < 0 || baho > 100) {
            printf("Notogri baho!\n");
            continue;
        }

        if(baho >= 90) {
            printf("A'lo\n");
            a++;
        }
        else if(baho >= 75) {
            printf("Yaxshi\n");
            yaxshi++;
        }
        else if(baho >= 60) {
            printf("Qoniqarli\n");
            qoniqarli++;
        }
        else {
            printf("Qoniqarsiz\n");
            qoniqarsiz++;
        }
    }

    printf("\nA'lo: %d ta", a);
    printf("\nYaxshi: %d ta", yaxshi);
    printf("\nQoniqarli: %d ta", qoniqarli);
    printf("\nQoniqarsiz: %d ta", qoniqarsiz);

    return 0;
}