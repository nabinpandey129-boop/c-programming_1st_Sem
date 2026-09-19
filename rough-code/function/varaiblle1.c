//call by reference
#include<stdio.h>
void changenum(int a)
{
 a=10;
 printf("the value of a is %d\n",a);
}
int main()
{
    int mynumber=304;
    changenum(&mynumber);
    return 0;
}
 