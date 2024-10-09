#include <stdio.h>

int main(){
    int n;
    printf("Enter number of elements of the array: ");
    scanf("%d", &n);

    int arr[n];
    int arrb[n];
    
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    printf("Array 1: ");
    for(int i=0; i<n; i++){
       printf("%d ", arr[i]);
       arrb[i]= arr[i];
    }
    printf("\nArray 2: ");
    for(int i=0; i<n; i++){
        printf("%d ", arrb[i]);
        
    }
    return 0;
}