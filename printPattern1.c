#include <stdio.h>

int main(){
    for(int i=1; i<=5; i++){
         printf("1 ");
        for(int j=1; j<4; j++){
           
            if(i==1 || i==5){
               printf("1 ");
            }
            else{
                printf("0 ");
            }
        }
        printf("1 \n");
    }
    return 0;
}