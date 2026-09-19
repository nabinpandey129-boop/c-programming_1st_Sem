#include <stdio.h>

// Function Prototypes (The "Head's Up" for the compiler)
// void sleep();
int addition();
float divide();

int main() {
    // sleep();
    addition(); // Calling the function
    return 0;
}

// Function Definitions
int addition() {
    

    return 60;
}

float divide() {
    return 6.0f;
}

// void sleep() {
//     printf("\ntime to sleep");
// }
int main()
{
  sleep();

//this function returns int, so we are storing it in a variable 
int a=addition();
printf("this is returned value %d\n",a);
char newchar= type_char();
printf("this is returned value from char %c\n",newchar);

return 0;
}
