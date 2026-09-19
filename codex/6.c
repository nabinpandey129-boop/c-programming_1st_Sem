#include<stdio.h>
int main()
{
    //punits is per units
    float unit, total;
    int punits=5;
printf("enter the units consumed:");
scanf("%f",&unit);
total=punits*unit;
printf("total electricity bill amount:%2.f",total);
return 0;


}
