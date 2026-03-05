#include <stdio.h>

int main() {
    int magassag;
    printf("Magasság: ");
    scanf("%d", &magassag);

    if (magassag <= 0 || magassag % 2 == 0) {
        printf("Hiba: csak pozitiv paratlan szamot fogadunk el.\n");
        return 1;
    }

    int fele = magassag / 2;
    for (int i = 0; i <= fele; i++) {
        for (int j = 0; j < fele - i; j++)
            printf(" ");
        for (int j = 0; j < 2*i + 1; j++)
            printf("*");
        printf("\n");
    }

    for (int i = fele - 1; i >= 0; i--) {
        for (int j = 0; j < fele - i; j++)
            printf(" ");
        for (int j = 0; j < 2*i + 1; j++)
            printf("*");
        printf("\n");
    }

    return 0;
}
