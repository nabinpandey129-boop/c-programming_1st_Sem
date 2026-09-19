#include<stdio.h>
int main()
{
  FILE *fp;
  char ch[90];
  fp=fopen("demo.txt","r");
  printf("reading file contents:\n\n");
  fseek(fp,10,SEEK_SET);
  ch[0] = fgetc(fp);
  printf("%c",ch[0]);
  fclose(fp);
  printf("\nFile pointer is at position: %ld", ftell(fp));
 rewind(fp);
  return 0;
}