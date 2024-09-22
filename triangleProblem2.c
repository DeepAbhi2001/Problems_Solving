#include <stdio.h>

int main(){

    float a, b, c;
    printf("Enter three angles of the triangle \n");
    scanf("%f %f %f", &a, &b, &c);
    float max = a;
    if(b>max)
    max=b;
    if(c>max)
    max=c;
    if(a == b && b == c ){
        printf("This is an Equilateral Triangle \n");
    }
     else if(a == b || b == c || a == c){
        printf("This is an Isosceles Triangle \n");
    }
      else if ((a*a == b*b + c*c) || (b*b == a*a + c*c) || (c*c == a*a + b*b)){
        printf("This is a Right Angled Triangle \n");
      }
     
    else {
        printf("This is a Scalene Triangle");
    }
      
    return 0;
}
