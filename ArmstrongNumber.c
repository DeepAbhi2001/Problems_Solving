#include <stdio.h>


/*int armstrongNo(int num){
    int a, b =0; 
    for(int i=1; i<=num; i++){
        a= num%10;
        b = b+(a*a*a);
        num=num/10;
    }
    
    return b==num;
    
}
*/

int main(){
    int n, a, num, sum;
    printf("Enter the value of n: \n");
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        
        num=i;
        sum=0;
       while(num!=0){
        a= num%10;
        sum += (a*a*a);
        num /= 10;
       }
       if(sum==i){
        printf("%d ", i);
    }  
       }
       
    
  return 0;
}