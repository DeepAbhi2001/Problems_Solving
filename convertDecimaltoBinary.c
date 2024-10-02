#include <stdio.h>

int main(){
    int n, num, binary[32], index=0;
    printf("Enter any decimal number: \n");
    scanf("%d", &n);
    num=n;

    while(num>0){
        binary[index]= num%2;
        num=num/2;
        index++;
    }

    printf("The binary conversion of %d: ", n);

    for(int i=index-1; i>=0; i--){
        printf("%d",binary[i]);
    }
    return 0;
}