#include <stdio.h>
int main() {
    int a = 0, b = 1,c, i, n;
    printf("Enter number of terms: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        if (i == 1) {
            printf("%d ", a);
            continue;
        }
        if (i == 2) {
            printf("%d ", b);
            continue;
        }
        c = a + b;
        a = b;
        b =c;
        printf("%d ",c);
    }
    return 0;
}