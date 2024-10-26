#include<stdio.h>
int main()
{
    int n;
    printf("Enter the no of terms: ");
    scanf("%d",&n);
    int a= 0,b= 1,s;
    for(int x= 1;x<=n;x++)
    {
        printf("%d ",a);
        s= a+b;
        a= b;
        b= s;
    }
}