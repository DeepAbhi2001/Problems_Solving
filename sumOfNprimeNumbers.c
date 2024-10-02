#include <stdio.h>

int main(){
    int n, a=2, sum=0, num=0;
    printf("Enter the value of n: \n");
    scanf("%d", &n);
    
    while(num<n){
      int isPrime=1;
      for(int i=2; i<=(a/2); i++){
       if(a%i==0){
        isPrime=0;
        break;
       }
      }
       if(isPrime){
        sum+=a;
        num++;
       }
        a++;
      
    }
    printf("The sum of first %d prime numbers: %d", n, sum);
    return 0;
}
