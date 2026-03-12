#include <stdio.h>

int is_sorted(int arr[], int n);

int is_sorted(int arr[], int n)
{
    for(int i = 0; i < n - 1; i++)
    {
        if(arr[i] > arr[i+1])
            return 0;
    }
    return 1;
}

int main()
{
    int a[] = {1, 2, 3, 4, 5};  
    int b[] = {1, 5, 3, 7};     

    int n1 = sizeof(a) / sizeof(a[0]);
    int n2 = sizeof(b) / sizeof(b[0]);

    printf("a tomb: %d\n", is_sorted(a, n1));
    printf("b tomb: %d\n", is_sorted(b, n2));

    return 0;
}
/*#include <stdio.h>

int is_sorted(int arr[], int n);

int is_sorted(int arr[], int n)
{
    for(int i = 0; i < n - 1; i++)
    {
        if(arr[i] > arr[i+1])
            return 0;
    }
    return 1;
}

int main()
{
    int arr[] = {1, 2, 2, 5, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    if(is_sorted(arr, n))
        printf("A tomb rendezett.\n");
    else
        printf("A tomb nem rendezett.\n");

    return 0;
}
*/