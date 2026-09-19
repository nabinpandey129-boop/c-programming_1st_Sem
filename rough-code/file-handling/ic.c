#include <stdio.h>
#include <stdlib.h>


int main ()
{
// FILE *fp;
// fp = fopen("file.txt", "w");
// fprintf(fp,"hello studets");
// fclose(fp);
FILE *fp;
char name[20];
fp = fopen("file.txt", "r");
fscanf(fp, "%s",name);
printf("name: %s", name);
fclose(fp);

return 0;
}
