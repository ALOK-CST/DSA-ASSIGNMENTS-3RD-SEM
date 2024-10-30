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
    for(int x=0;x<n;x++)
    {
        int minIdx= x;
        for(int y= x+1;y<n;y++)
        {
            if(arr[y]<arr[minIdx])
                minIdx= y;
        }
        swap(&arr[x],&arr[minIdx]);
    }
    printf("Sorted Array: ");
    for (int x = 0; x < n; x++)
    {
        printf("%d ", arr[x]);
    }
    free(arr);
}
