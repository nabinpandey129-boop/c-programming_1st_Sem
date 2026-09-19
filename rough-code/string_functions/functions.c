#include<stdio.h>
#include<string.h>
int main()
{
char name[4]="Ram\0";
char cast[4]="Rom\0";
char copyname[4];
// char a[10]="Good ";
// char b[10]="Morning";

printf("Name:%s",name);
//finding length of string
printf("\nlength of string is:%d",strlen(name));
//copying one string to another
strcpy(copyname,name);
printf("\nCopied name:%s",copyname);
//concatenating two strings
// printf("\nConcatenated string:%s",strcat(a, b));

// printf("\nUppercase of name:%s", strupr(name));
// printf("\nLowercase of name:%s", strlwr(name));

printf("\ncompare name:%d",strcmp(name,cast));



return 0;
}
