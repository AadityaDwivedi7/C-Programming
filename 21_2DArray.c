#include<stdio.h>
int main(){
    int ar[2][3] ={{2, 3, 4}, {3, 1, 5}};
    printf("%d\n", ar[0][2]); // prints 1st row 3rd columns element=> 4 
    ar[0][0] = 1;
    printf("%d\n", ar[0][0]);
}