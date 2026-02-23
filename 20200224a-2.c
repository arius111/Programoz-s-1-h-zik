#include <stdio.h>

int main()
{

int osszeg = 0;

for(int i = 65; i <= 90; i++) 
{
osszeg += i;
}

printf("Osszeg: %d\n", osszeg);

return 0;
}