#include <stdio.h>
#include <stdlib.h> 

int sum_differences(int arr[], int n);

int sum_differences(int arr[], int n)
{
    int sum = 0;
    for(int i = 0; i < n-1; i++)
    {
        sum += abs(arr[i] - arr[i+1]);
    }
    return sum;
}

int main()
{
    int arr[] = {2, 1, 0, 2, 4};
    int n = sizeof(arr)/sizeof(arr[0]);

    int result = sum_differences(arr, n);

    printf("Szomszedos felhokarcolok magassagkulonbsegeinek osszege: %d\n", result);

    return 0;
}
