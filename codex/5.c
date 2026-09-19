#include<stdio.h>
int main()
{
int l;
int b, c;
int area, perimeter;
printf("enter the value of length: ");
scanf("%d",&l);
printf("\nenter the value of breath:");
scanf("%d",&b);
area=l*b;
c=l+b;
perimeter=2*c;
printf("Area=%d",area);
printf("\nPerimeter=%d",perimeter);
return 0;
}