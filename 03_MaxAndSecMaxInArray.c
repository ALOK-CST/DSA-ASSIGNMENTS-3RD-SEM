#include <stdio.h>
#include<stdlib.h>
#include<limits.h>
int main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int *arr= (int*)malloc(n*sizeof(int));
    printf("Enter the numbers: ");
    for(int x= 0;x<n;x++)
    {
        scanf("%d",&arr[x]);
    }
    int max= INT_MIN,secMax= INT_MIN;
    for(int x= 0;x<n;x++)
    {
        if(arr[x]>max)
        {
            secMax= max;
            max= arr[x];
        }
        else if (arr[x] > secMax && arr[x] < max)
            secMax= arr[x];
    }
    printf("Maximum number in the array is : %d\n",max);
    printf("Secong Maximum number in the array is : %d",secMax);
}