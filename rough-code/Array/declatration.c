#include<stdio.h>
int  main()
{
    //data_type array_name[size];

    char kdbc[6]={'a','b','c','d','e'};
for (int i = 0; i <=6; i++)
{
if (kdbc[i]=='c')
{
    
    printf("position value of %c= %d",kdbc[i],i);
break;
} 


}
    
return 0;

}
