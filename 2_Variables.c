#include<stdio.h>
int main(){
    int num = 15;
    float flt = 0.9;
    char str = 'a';
    printf("%d\n", num);  
    printf("%f\n", flt);
    printf("%c\n", str);
    printf("The number selected is %d\n" , num );   
    printf("this is a float %f\n", num);
    printf("my name starts with the letter %c\n", str);
    printf("My surname starts with the letter %c\n", 'D');
    printf("This is an integer %d\n", 5);

    // Changing Variable Values 
    int num2 = 234;
    num2 = 444;
    printf("%d\n", num2);

    num = num2;
    printf("%d\n", num);

    int x = 209;
    int y = 33;
    int sum = x + y;
    printf("the sum is %d\n", sum);

    // DECLARING MULTIPLE VARIABLES 
    int a = 90, b = 45, c = 33;
    printf("%d\n", a+ b+ c);
    

}