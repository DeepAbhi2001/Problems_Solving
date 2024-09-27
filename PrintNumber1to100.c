#include <stdio.h>

int main(){
    
    printf("The numbers from 1 to 100: \n");
    for(int i=1; i<=100; i++){
        
        if(i%3==0 && i%5==0){
            printf("BuzzFizz  ");
        }
        else if(i%5==0){
            printf("Buzz  ");
        }
        else if(i%3==0){
            printf("Fizz  ");
        }
        else{
            printf("%d  ", i);
        }
    }return 0;
}