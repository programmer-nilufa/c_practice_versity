#include <stdio.h>

int main() {
    printf("Enter the value A :");
    int A ;
    scanf("%d",&A);
    
    printf("Enter the value B :");
    int B ;
    scanf("%d",&B);
    
    printf("Enter the value C :");
    int C ;
    scanf("%d",&C);
    if (A > B){
        printf("The biggest number is A =");
    }
    else if (B > C){
        printf("The biggest number is B =");
    }
    else {
        printf("The biggest number is C =");
    }

    return 0;
}