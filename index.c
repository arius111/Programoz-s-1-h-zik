#include <stdio.h>

int index_of(int arr[], int n, int x);

int index_of(int arr[], int n, int x)
{
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == x)
            return i;
    }
    return -1;
}

int main()
{
    int arr[] = {4, 7, 2, 9, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    int x = 9;

    int pos = index_of(arr, n, x);

    if(pos != -1)
        printf("Az elem indexe: %d\n", pos);
    else
        printf("Az elem nincs a tombben.\n");

    return 0;
}
