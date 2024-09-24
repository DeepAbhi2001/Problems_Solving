#include <stdio.h>
#include <math.h>

int main(){
   float a, b, c, discriminant, root1, root2, realRoot, imaginaryRoot;
   printf("Enter the coefficient of a, b, c: \n");
   scanf("%f %f %f", &a, &b, &c);
   
   discriminant = (b*b) - (4*a*c);
    switch (discriminant > 0) {
        case 1:
            
            root1 = (-b + sqrt(discriminant)) / (2 * a);
            root2 = (-b - sqrt(discriminant)) / (2 * a);
            printf("The roots are real and distinct.\n");
            printf("Root 1 = %.2f\n", root1);
            printf("Root 2 = %.2f\n", root2);
            break;
        case 0:
            
            switch (discriminant == 0) {
                case 1:
                    
                    root1 = root2 = -b / (2 * a);
                    printf("The roots are real and equal.\n");
                    printf("Root 1 = Root 2 = %.2f\n", root1);
                    break;
                case 0:
                    
                    realRoot = -b / (2 * a);
                    imaginaryRoot = sqrt(-discriminant) / (2 * a);
                    printf("The roots are complex and distinct.\n");
                    printf("Root 1 = %.2f + %.2fi\n", realRoot, imaginaryRoot);
                    printf("Root 2 = %.2f - %.2fi\n", realRoot, imaginaryRoot);
                    break;
            }
            break;
    }

    return 0;
}