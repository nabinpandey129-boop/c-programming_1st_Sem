
#include<stdio.h>
int main()
{
     int a=25;
     int b=20;

     //arthmetic operators

     printf("%d",a-b);
     printf("\n%d",a+b);
     printf("\n%d",a*b);
     printf("\n%d",a%b);

     //relational opertors
    //used to compare two value , result is true(1) or false(0)

    printf("\ngreater=%d",a>b);
    printf("\nlesser%d",a<b);
    printf("\nequal %d",a==b);
    printf("\nnot equal%d",a!=b);
    printf("\n greaterthan or equal to%d",a>=b);
    printf("\nlesser than or equal to %d",a<=b);

    // 3.logical and bolean operators
    // used to combine multiple conditions
    // operators meaning
    // && logical AND

    //! logical NOT

    printf("\nlogical AND %d",(a>b)&&(a<b));
    printf("\nlogical OR %d",(a>b)&&(a<b) );

    //AND logical not 

    printf("\nlogical AND%d",1&&1);
    printf("\nlogical AND%d",0&&0);
    printf("\nlogical AND%d",1&&1);

    //OR logic

    printf("\nOR %d",1||0);
    printf("\nOR %d",0||0);
    printf("\nOR %d",1||1);
    
    //4. assignment operators
    //useed to assign values to vriables
    //operators examples
   // = a==5 assign 
    //+= a+=3 a=a+3
    //-= a-=2 a=a-2
    //*= a*=4  a=a*4
    // /=  a/=2 a=a/2
    //%= a%=2  a=a%2
    
    int z=1;
    z+=3;
    printf("\nassigning addition %d",z);
    z=z+3;
    printf("\nassigning additon2  %d", z);
    z*=3;
    printf("\nnmultiplication %d",z);
    z=z*4;
    printf("\nmultiplication %d",z);

    //ternary operator short form of if-else
    //condition ? expressiona1 : expression2;

    int age =20;
    (age>=20)? printf("\neligible\n"): printf("not eligible\n");

    int input;
     scanf("%d",&input);
     (input%2==0)? printf("even\n"): printf("odd\n");

    //increament and decreament operators
    //used to increase or decrease the value of a variables
    //operators meanning
    //++ increament
    //-- decreament

    //write  a program to demonstrtate increament and decreamet operators
    int count =5;
    printf("initial count: %d",count);
    count++;
     printf("after increament%d",count);
    count--;
printf("after increament%d",count);
printf("final count %d",count);
    return 0;
}