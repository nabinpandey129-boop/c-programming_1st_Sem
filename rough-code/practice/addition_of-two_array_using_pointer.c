#include <stdio.h>

int main() {
   
    int first[100], second[100], sum[100];
    int *ptr1, *ptr2, *ptrSum;
int n=1;
    ptr1 = first;
    ptr2 = second;
    ptrSum = sum;

    // Input elements for the first array
    printf("Enter %d elements for the first array:\n", n);
    
        scanf("%d", ptr1);
    

    // Input elements for the second array
    printf("Enter %d elements for the second array:\n", n);
    
        scanf("%d", ptr2);
    // Adding arrays using pointers
  
        *(ptrSum ) = *(ptr1) + *(ptr2) ;
    // Displaying the result
    printf("The sum of the two arrays is:\n");
  
        printf("%d ", *ptrSum );
  

    return 0;
}
