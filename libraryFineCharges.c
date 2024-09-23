#include <stdio.h>

int main(){
    int num;
    printf("Number of days you're late to return the book \n");
    scanf("%d", &num);

    if (num <= 0) {
        printf("No fine. Thank you for returning the book on time!\n");
    }
    else if(num<=5){
        printf("You have to pay fine of 50 paisa \n");
    }
    else if(num<=10){
        printf("You have to pay fine of Rs. 1");
    }
    else if(num<=30){
        printf("You have to pay fine of Rs. 5");
    }
    else {
        printf("Membership cancelled due to returning the book after 30 days. \n");
    }
    
    return 0;
}