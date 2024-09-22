#include <stdio.h>
#include <math.h>

int main(){
    int R, G, B;
    float C, Y, M, K, White;
    printf("Enter the value of R, G, B \n");
    scanf("%d %d %d", &R, &G, &B);
     
     if(R == 0 && G == 0 && B == 0){
        C = M = Y = K = 0;
        K = 1;
     }
     else {
        float Red = R/255.0;
        float Green = G/255.0;
        float Blue = B/255.0;
     
    White = fmax(fmax(R/255, G/255), B/255);
    C = (White- Red/255) / White;
    M = (White- Green/255)/White;
    Y = (White - Blue/255)/White;
    K = 1 - White;
  }
  printf("CMYK values are: %f %f %f %f", C, M, Y, K); 
   return 0;
}