#include <stdio.h>
#include <math.h>
int main() {
   float radius , circumference , area;
    
    printf("enter value of radius: ");
    scanf("%f",&radius);
    
    area = M_PI*pow(radius,2);

     circumference = 2*M_PI*radius;

        printf("%f\n%f",area,circumference);
    
    return 0;

}
