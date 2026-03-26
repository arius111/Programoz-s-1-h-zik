#include <stdio.h>


int hossz(char s[]) {
    int i = 0;
    while (s[i] != '\0') {
        i++;
    }
    return i;
}

int main() {
    char szo[100];
    int db = 0;
    int max = 0;

    printf("Adj meg szavakat '*' végjelig!\n");

    while (1) {
        printf("Szó: ");
        fgets(szo, sizeof(szo), stdin);

        
        int len = hossz(szo);
        if (len > 0 && szo[len - 1] == '\n') {
            szo[len - 1] = '\0';
            len--;
        }

        
        if (szo[0] == '*' && szo[1] == '\0') {
            break;
        }

        db++;

        if (len > max) {
            max = len;
        }
    }

    printf("\n%d db szót adtál meg. A leghosszabb szó %d karakterből áll.\n", db, max);

    return 0;
}