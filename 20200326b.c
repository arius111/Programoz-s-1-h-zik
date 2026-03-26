#include <stdio.h>

int main() {
    int seen[100] = {0}; 
    int x;

    printf("Adj meg 0 végjelig egész számokat az [1, 99] intervallumból!\n");

    while (1) {
        printf("Szám: ");
        scanf("%d", &x);

        if (x == 0) {
            break;
        }

        if (x < 1 || x > 99) {
            printf("Ez a szám kívül esik az elfogadható intervallumon!\n");
            continue;
        }

        seen[x] = 1; 
    }


    int db = 0;
    for (int i = 1; i <= 99; i++) {
        if (seen[i]) {
            db++;
        }
    }

    printf("\n%d db különböző szám lett megadva.\n", db);


    printf("Ezek (növekvő sorrendben): ");
    int first = 1;

    for (int i = 1; i <= 99; i++) {
        if (seen[i]) {
            if (!first) {
                printf(", ");
            }
            printf("%d", i);
            first = 0;
        }
    }
    printf("\n");

    return 0;
}