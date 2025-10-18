#include<stdio.h>
int main(){

    // aritmetic assignment operators
    int i = 10;
    printf("%d\n", i);
    i += 5;
    printf("%d\n", i);
    i -= 5;
    printf("%d\n", i);
    i *= 5;
    printf("%d\n", i);
    i /= 5;
    printf("%d\n", i);
    i %= 5;
    printf("%d\n", i);

    // Comparison Operators 
    int x = 5;
    int y = 10;
    printf("%d\n", x>y); // return boolean value 
    printf("%d\n", x==y);
    printf("%d\n", x<=y);
    printf("%d\n", x!=y);

    // logical operators 
    printf("%d\n", x>5 && y>10); //Returns 1 if both statements are true
    printf("%d\n", x < 5 || x < 4 ); // OR operator Returns 1 if one of the statements is true
    printf("%d\n", !(x < 5 && y < 10)); // Not operator Reverse the result, returns 0 if the result is 1

}
