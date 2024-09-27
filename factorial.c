#include <stdio.h>

int main(){
    int n, num, factorial=1;
    printf("Enter the number: \n");
    scanf("%d", &n);
    num = n;
    for(int i=1; i<n; i++){
       factorial = factorial*num;
       num--;
    }
    printf("The factorial of %d is: %d", n, factorial);
    return 0;
}