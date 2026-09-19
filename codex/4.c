#include <stdio.h>
int main()
{
    float cel;
    float fer;
    printf("enter the temp in celcius:");
    scanf("%f",&cel);
 fer=(cel*1.8)+32;
printf("the temp in fahrenhite:%.2f",fer);
return 0;
} 