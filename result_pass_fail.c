#include <stdio.h>

int main() {
    printf("Enter your result: ");
    int result;
    scanf("%d",&result);
    if (result > 32){
        printf("Pass");
    }
    else {
        printf("Fail");
    }

    return 0;
}