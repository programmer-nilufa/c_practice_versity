#include <stdio.h>

int main() {
   
    printf("Enter the first num: ");
    int a;
    scanf(" %d", &a);
    printf("Enter the second num:");
    int b;
    scanf(" %d", &b);
    int sum = a+b;
    printf("The summmation is = %d",sum);

    return 0;
}