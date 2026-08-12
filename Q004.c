#include <stdio.h>
#include <math.h>
int main() {
   double r = 20 , circumfrence , area;
    
    double pie = 3.141592653589793;
    area = (pie)*pow (r,2);

     circumfrence = 2*(pie)*r;

        printf("%.2f\n%.2f",area,circumfrence);
    
    return 0;

}
