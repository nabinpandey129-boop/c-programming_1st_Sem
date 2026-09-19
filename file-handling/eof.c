#include<stdio.h>
int main()
{
  FILE *fp;
  char ch;
  fp=fopen("demo.txt","r");
  printf("reading file contents:\n\n");

  while ((ch=fgetc(fp))!=EOF)
  {
  printf("%c",ch);
  }
  printf("\n\n End of file reached.");
  fclose(fp);
  return 0;
}