#include<stdio.h>
int main()
{
    int n, rev=0 , rem, num;
    printf("enter the number:");
    scanf("%d",&n);
    num=n;
    while(n!=0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    if(num==rev)
        printf("Pallindrome");
    else
        printf("not Pallindrome");
}