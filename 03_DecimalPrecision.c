#include<stdio.h>
int main(){
    float flt = 4.8;
    printf("%f\n", flt); // default will show 6 digits 
    printf("%.1f\n", flt); // shows 1 digit
    printf("%.4f\n", flt); // shows 4 decimal digits 
}
