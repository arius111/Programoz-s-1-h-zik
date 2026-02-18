#include <stdio.h>

int main() {
    int a, b;
    printf("Adja meg a téglalap egyik oldalát: ");
    scanf("%d", &a);
    printf("Adja meg a téglalap másik oldalát: ");
    scanf("%d", &b);

    int terulet = a * b;
    int kerulet = 2 * (a + b);

    printf("A terület: %d\n", terulet);
    printf("A kerület: %d\n", kerulet);

    return 0;
}