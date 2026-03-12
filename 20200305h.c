#include <stdio.h>

void make_positive(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        if(arr[i] < 0)
            arr[i] = -arr[i];
    }
}

void print_array(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
        if(i != n-1)
            printf(", ");
    }
    printf("\n");
}

int main()
{
    int arr[] = {3, -5, 7, -2, 0, -9};
    int n = sizeof(arr)/sizeof(arr[0]);

    print_array(arr, n);
    make_positive(arr, n);
    print_array(arr, n);

    return 0;
}
