#include <stdio.h>

void feltolt(char tomb[]) {
    for (int i = 0; i < 26; i++) {
        tomb[i] = 'a' + i;
    }
}

int main() {
    char abc[26];

    feltolt(abc);

    for (int i = 0; i < 26; i++) {
        printf("%c", abc[i]);
    }
    printf("\n");

    return 0;
}