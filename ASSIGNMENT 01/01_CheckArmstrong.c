#include<stdio.h>
#include<math.h>
int countDigit(int n)
{
    int c= 0;
    while(n!=0)
    {
        c++;
        n= n/10;
    }
    return c;
}
int isArmstrong(int n)
{
    int num= n,sum= 0,c;
    c= countDigit(n);
    while(n!=0)
    {
        int d= n%10;
        sum= sum+pow(d,c);
        n= n/10;
    }
    if(sum==num)
        return 1;
    else
        return 0;
}
int main()
{
    int n;
    printf("Enter any number: ");
    scanf("%d",&n);
    if(isArmstrong(n))
        printf("%d is an Armstrong Number",n);
    else
        printf("%d is not an Armstrong Number",n);
}
