#include<stdio.h>
int main(){
    float sum = 5 / 2;
    printf("%f\n", sum); // 5 and 2 are still integers thats why it prints 2.000000 not 2.50000
    
    // Manual conversion
    float sum2 = (float) 5/2 ;
    printf("%f", sum2);

}
