#include<stdio.h>
int main(){
    int a = 5;
    printf("%d\n", a);
    printf("%p\n", &a);

    int b = 43;
    int* ptr = &b; // pointer declaration 
    printf("%d\n", b);
    
    // Reference: Output the memory address of myAge with the pointer (0x7ffe5367e044)
    printf("%p\n", ptr);

    // Dereference: Output the value of myAge with the pointer (43)
    printf("%d\n", *ptr);

}