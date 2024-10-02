#include <stdio.h>

int main(){
   int n;
   printf("Enter the number of elements of the array: ");
   scanf("%d", &n);

   int arr[n];

   for(int i=0; i<n; i++){
    scanf("%d", &arr[i]);
   }

   int MAX = arr[0];
   int MIN = arr[0];
 
   for(int i=1; i<n; i++){
    if(arr[i]>MAX){
        MAX= arr[i];
   }
    if(arr[i]<MIN){
        MIN = arr[i];
   }
  }
  printf("The Maximum value from the array is: %d \n", MAX);
  printf("The Minimum value from the array is: %d", MIN);

  return 0;
}