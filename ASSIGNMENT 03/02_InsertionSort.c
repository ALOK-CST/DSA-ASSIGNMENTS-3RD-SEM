#include <stdio.h>
#include <stdlib.h>
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int *arr = (int *)malloc(n * sizeof(int));
    printf("Enter the numbers: ");
    for (int x = 0; x < n; x++)
    {
        scanf("%d", &arr[x]);
    }
    for(int x= 1;x<n;x++)
    {
        for (int y = x; y > 0 && arr[y] < arr[y - 1]; y--)
        {
            swap(&arr[y],&arr[y-1]);
        }
    }
    printf("Sorted Array: ");
    for (int x = 0; x < n; x++)
    {
        printf("%d ", arr[x]);
    }
}