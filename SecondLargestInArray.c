#include <stdio.h>

int main(){
    int n;
    printf("Enter the number of elements in array: ");
    scanf("%d", &n);

    int arr[n];

    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int largest=arr[0];
    int second_largest=-1;

    for(int j=0; j<n; j++){
       if(arr[j]>largest){
        second_largest= largest;
        largest = arr[j];
       }
       else if(arr[j]>second_largest && arr[j]!=largest){
         second_largest = arr[j];
       }
    }
    if(second_largest==-1){
        printf("There is no second largest number in array");
    }
    else{
    printf("%d", second_largest);
    }
    return 0;
}