#include <stdio.h>

int main(){
    int n, a, b, sum=0, factorial;
    printf("Enter any number: \n");
    scanf("%d", &n);
    a=n;
    while(n>0){
        factorial=1;
        b=n%10;
        for(int j=1; j<=b; j++){
            factorial*=j;
            
        }
        sum+=factorial;
        n=n/10;
    }
    if(sum==a){
        printf("%d is a Strong Number \n", a);
    }
    else{
        printf("%d is not a Strong Number", a);
    }
    return 0;
}