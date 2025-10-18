#include<stdio.h>
int main(){
    int ar[] = {34, 54, 21, 44, 67, 23};
    printf("%zu", sizeof(ar)); // prints 24 because sizeof operator prints in bytes, integer is usually 4 bytes and there are 6 elements therefore 4*6=24
}