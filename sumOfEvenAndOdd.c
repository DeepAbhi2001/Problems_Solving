#include <stdio.h>

int main(){
    int n, sumEven=0, sumOdd=0;
    printf("Enter the value of n: \n");
    scanf("%d", &n);

    for(int i=1; i<=n; i++){
        if(i%2==0){
            sumEven+=i;
        }
        else{
            sumOdd+=i;
        }
    }
    printf("Sum of all Even numbers from 1 to %d: %d \n", n, sumEven);
    printf("Sum of all Odd numbers from 1 to %d: %d", n, sumOdd);

    return 0;
}