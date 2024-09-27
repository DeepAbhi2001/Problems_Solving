#include <stdio.h>

int main(){
    int n, next, first = 0, second = 1;
    printf("Enter the value of n \n");
    scanf("%d", &n);
    printf("The fibonacci series of 1 to %d: ", n);
    for (int i = 0; i < n; i++) {
        if (i <= 1) {
            next = i;
        } else {
            next = first + second;
            first = second; 
            second = next; 
        }
        printf("%d ", next); 
    }

    return 0;
}