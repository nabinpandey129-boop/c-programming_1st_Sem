#include <stdio.h>

int main()
{
    char str[100];
    int i;
    int vowels = 0, consonants = 0;
    int count=0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);   // allows spaces

    for(i = 0; str[i] != '\0'; i++)
      {
        count++;
    }


  printf("Number of characters in the string: %d\n", count);
  for ( i = 0; str[i] != '\0'; i++)
  {
      char ch = str[i];
  
        // Check vowel
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
           ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
        {
            vowels++;
        }
        // Check consonant (alphabet only, not vowel)
        else if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
        {
            consonants++;
        }
    }

    printf("Total vowels: %d\n", vowels);
    printf("Total consonants: %d\n", consonants);

    return 0;
}