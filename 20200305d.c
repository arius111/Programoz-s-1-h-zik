#include <stdio.h>

int main()
{
    printf("%d\n", (1<<11) - (1<<4) - (1<<2) - (1<<1));
    return 0;
}