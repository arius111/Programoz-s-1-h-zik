#include <stdio.h>
#include <stdlib.h>

// Általános függvény a szomszédos különbségek összegének számolására
int szomszedos_kulonbsegek_osszege(int tomb[], int meret) {
    int osszeg = 0;
    for (int i = 0; i < meret - 1; i++) {
        osszeg += abs(tomb[i] - tomb[i + 1]);
    }
    return osszeg;
}

int main() {
    // 2^1024 számjegyei
    int szamjegyek[] = {
        1,7,9,7,6,9,3,1,3,4,8,6,2,3,1,5,9,0,7,7,2,9,3,0,5,1,9,0,7,8,9,0,2,4,7,3,3,6,1,7,9,7,6,9,7,8,9,4,2,3,0,6,5,7,2,7,3,4,3,0,0,8,1,1,5,7,7,3,2,6,7,5,8,0,5,5,5,0,6,2,0,6,8,6,9,8,5,3,7,9,4,4,9,2,1,2,9,8,2,9,5,9,5,8,5,5,0,1,3,8,7,5,3,7,1,6,4,0,1,5,7,1,0,1,3,9,8,5,8,6,4,7,8,3,3,7,7,8,6,0,6,9,2,5,5,8,3,4,9,7,5,4,1,0,8,5,1,9,6,5,9,1,6,1,5,1,2,8,0,5,7,5,9,4,0,7,5,2,6,3,5,0,0,7,4,7,5,9,3,5,2,8,8,7,1,0,8,2,3,6,4,9,9,4,9,9,4,0,7,7,1,8,9,5,6,1,7,0,5,4,3,6,1,1,4,9,4,7,4,8,6,5,0,4,6,7,1,1,0,1,5,1,0,1,5,6,3,9,4,0,6,8,0,5,2,7,5,4,0,0,7,1,5,8,4,5,6,0,8,7,8,5,7,7,6,6,3,7,4,3,0,4,0,0,8,6,3,4,0,7,4,2,8,5,5,2,7,8,5,4,9,0,9,2,5,8,1
    };
    
    int meret = sizeof(szamjegyek) / sizeof(szamjegyek[0]);
    int eredmeny = szomszedos_kulonbsegek_osszege(szamjegyek, meret);
    
    printf("A szomszedos felhokarcolok magassagkulonbsegenek osszege: %d\n", eredmeny);
    
    return 0;
}