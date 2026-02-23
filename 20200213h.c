#include <stdio.h>

int main() {
    int osszeg = 0;
    int i;

    for(i = 1; i < 1000; i++) {
        if(i % 3 == 0 || i % 5 == 0) {
            osszeg = osszeg + i;
        }
    }

    printf("Az osszeg: %d\n", osszeg);

    return 0;
}
//Ha felsoroljuk a 10-nél kisebb pozitív egész számokat, melyek 3-nak vagy 5-nek a többszörösei, akkor a köv. számokat kapjuk: 3, 5, 6 és 9. Ezek összege 23.Állapítsuk meg azon 1000-nél kisebb számok összegét, melyek 3-nak vagy 5-nek a többszörösei.