#include <stdio.h>

void checkNumber(int num){
    int check;
     if(num<0){
         check = 1;
     }
     else if(num==0){
         check = 2;
     }
     else{
        check = 3;
     }
     switch(check){
        case 1:
          printf("The entered number is negative \n");
          break;
        case 2:
        printf("The entered number is Zero \n");
        break;
        case 3:
        printf("The entered number is positive \n");
        break;  
     }
}

int main(){
    int number;
    printf("Enter any number \n");
    scanf("%d", &number);
    checkNumber(number);
    return 0;
}