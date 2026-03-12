#include <stdio.h>

int contains(int arr[], int n, int x);

int contains(int arr[], int n, int x)
{
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == x)
            return 1;
    }
    return 0;
}

int main()
{
    int arr[] = {4, 7, 2, 9, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    int x = 9;

    if(contains(arr, n, x))
        printf("Az elem szerepel a tombben.\n");
    else
        printf("Az elem nem szerepel a tombben.\n");

    return 0;
}
