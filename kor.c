#include <stdio.h>
#include <math.h>

double main() {
    double r;

    printf("Adja meg a kör sugarát: ");
    scanf("%lf", &r);

    double terulet = M_PI * pow(r, 2);
    double kerulet = 2 * M_PI * r;

    printf("A kor terulete: %2lf\n", terulet);
    printf("A kor kerulete: %2lf\n", kerulet);

    return 0;
}