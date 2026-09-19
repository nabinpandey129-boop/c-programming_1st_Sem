#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Enter num1: ");
    scanf("%d", &a);

    printf("Enter num2: ");
    scanf("%d", &b);

    printf("Enter num3: ");
    scanf("%d", &c);

    
    if (a >= b && a >= c)
    {
        printf("Largest = %d\n", a);
    }
        
    else if (b >= a && b >= c)
    {
        printf("Largest = %d\n", b);
    }
        
    else
    {
       printf("Largest = %d\n", c);
 
    }
        
   
    if ((a >= b && a <= c) || (a >= c && a <= b))
    {
       printf("Second Largest = %d\n", a); 
    }
        
    else if ((b >= a && b <= c) || (b >= c && b <= a))
    {
        printf("Second Largest = %d\n", b);
    }
        
    else
    {
          printf("Second Largest = %d\n", c);
    }

        if (a<=b&&a<=c)
        {
            printf("lowest=%d",a);
        }
        else if (b<=a&&b<=c)
        {
            printf("lowest=%d",b);
        }
        else
        {
            printf("lowest is=%d",c);
        }
        
    return 0;
}
