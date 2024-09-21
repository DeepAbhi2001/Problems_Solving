#include <stdio.h>

int main(){
      int a, num, sum=0;
      scanf("%d", &a);
      num = a;
      for(int i=1; i<=5; i++){
        int b = a%10;
        a = a/10;
        sum= sum*10 + b;
}
      printf("%d", sum);
      if(num == sum){
        printf("\n both are equal");
      }
      else{
        printf("\n both are not equal");
      }
      return 0;
}