#include <stdio.h>

int main(){
    int n,  a;
    printf("Enter the value of n: \n");
    scanf("%d", &n);
    printf("Prime numbers from 1 to %d: \n", n);
    for(int i=1; i<=n; i++){
        a=1;
        for(int j=2; j<=i/2; j++){
    if(i%j==0){
       a=0;
    }
    }
    if(a==1){
        printf("%d  ", i);
    }
    
    }  
  return 0;
}
