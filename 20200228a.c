#include <stdio.h>
#include <stdbool.h>

bool valid_triangle(double a, double b, double c)
{
    if (a <= 0 || b <= 0 || c <= 0)
        return false;

    if (a + b > c && a + c > b && b + c > a)
        return true;

    return false;
}

int main()
{
    double a, b, c;

    printf("Add meg a haromszog oldalait: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    if (valid_triangle(a, b, c))
        printf("Szerkesztheto haromszog.\n");
    else
        printf("Nem szerkesztheto haromszog.\n");

    return 0;
}
