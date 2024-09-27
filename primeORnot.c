#include <stdio.h>

int main(){
    int n, a=0;
    printf("Enter any number: \n");
    scanf("%d", &n);
    for(int i=2; i<n; i++){
    if(n%i==0){
       a++;
    }
    }
    if(a==0){
        printf("%d is a prime number", n);
    }
    else{
        printf("%d is not a prime number", n);
    }
    return 0;
}