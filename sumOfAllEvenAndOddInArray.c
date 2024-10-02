#include <stdio.h>

int main(){
    int arr[9]= {1,2,3,4,5,6,7,8,9};
    int sumEven =0, sumOdd = 0;
    for(int i =0; i<9; i++){
       if(arr[i]%2==0){
        sumEven+=arr[i];
       }
       else{
        sumOdd+=arr[i];
       }
    }
    printf("Sum of all Even numbers in Array: %d \n", sumEven);
    printf("Sum of all Odd numbers in Array: %d", sumOdd);

    return 0;
}