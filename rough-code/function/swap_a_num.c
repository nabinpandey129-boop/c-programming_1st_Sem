#include<stdio.h>
void swap(int *a, int *b, int *temp)
{
    *temp = *a;
    *a = *b;
    *b = *temp;
}


int main ()
{
    int a=10, b=20, temp;
    swap(&a,&b,&temp);
    printf("After swapping: a=%d, b=%d\n", a, b);
    return 0;
}


 