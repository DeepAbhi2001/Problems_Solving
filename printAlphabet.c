#include <stdio.h>

int main(){
   char alphabet='a', Alphabet = 'A';
   int b = 1, c=1;
   
   printf("Alphabets from a to z: \n");
   while(b<27){
    printf("%c    ", alphabet);
    alphabet++;
    b++;
   }
   printf("Alphabets from A to Z: \n");
   while(c<27){
    printf("%c    ", Alphabet);
    Alphabet++;
    c++;
   }
   return 0;
}
