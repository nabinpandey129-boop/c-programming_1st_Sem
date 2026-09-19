#include<stdio.h>
int main()
{
    int num, n, rev=0, rem;
    printf("enter the number:");
    scanf("%d",&n);
    
    while (n!=0)
    {
        rem=n%10; 
        rev=rev*10+rem;
        n=n/10;
    }
    printf("reversed number=%d",rev);

    printf("\n");
    num=n;
    if(num==rev)
    {
        printf("the number is palindrome");
    }
    else
    {
        printf("the number is not palindrome");
    }

    
    return 0;
}