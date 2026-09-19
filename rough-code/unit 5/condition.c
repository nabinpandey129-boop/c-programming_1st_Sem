#include<stdio.h>
int main()
{
    //branching statements
    //if conditions
     
    int value=11;
    if (value>=10)
    {
        printf("hello for statement\n");
        printf("hello for statement2\n");
        printf("hello for statement3\n");
    }
    // if-else condition 
//if(condition)
//{}
//else{}
int newvalue=9;
if(newvalue>=10)
{
    printf("**hello from newvalue");

}
else{
    printf("invalid numbber\n");
}
//else if condition 
int isOdd=50;
if (isOdd%2==0)
{
    printf("even");
}
else if(isOdd%2==0)
{
    printf("odd");
}
else
{
    printf("this is not number");
}

//switch statement
int day= 2;
printf("\nenter the day:");
scanf("%d",&day);
switch (day)
{
case 1:
    printf("day is 1\n");    
    break;
    case 2:
    printf("day is 2\n");
    break;
default:
printf("other day ");
    break;
}


return 0;
}