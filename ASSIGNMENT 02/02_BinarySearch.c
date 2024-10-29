#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n, key;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int *arr = (int *)malloc(n * sizeof(int));
    printf("Enter the numbers: ");
    for (int x = 0; x < n; x++)
    {
        scanf("%d", &arr[x]);
    }
    printf("Enter the number to be searched: ");
    scanf("%d", &key);
    int start= 0,end= n-1;
    while(start<=end)
    {
        int mid= start+(end-start)/2;
        if(arr[mid]==key)
        {
            printf("%d is found at pos %d", key,mid+1);
            return 0;
        }
        else if(arr[mid]>key)
            end= mid-1;
        else
            start= mid+1;
    }
}
