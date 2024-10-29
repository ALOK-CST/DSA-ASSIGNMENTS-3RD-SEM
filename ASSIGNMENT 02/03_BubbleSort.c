#include <stdio.h>
#include <stdlib.h>
void swap(int *a,int *b)
{
    int temp= *a;
    *a= *b;
    *b= temp;
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
    for(int x= 0;x<n-1;x++)
    {
        for(int y= 0;y<n-x-1;y++)
        {
            if(arr[y+1]<arr[y])
                swap(&arr[y+1],&arr[y]);
        }
    }
    printf("Sorted Array: ");
    for (int x = 0; x < n; x++)
    {
        printf("%d ",arr[x]);
    }
    free(arr);
}