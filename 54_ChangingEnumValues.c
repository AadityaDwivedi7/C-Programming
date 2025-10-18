#include<stdio.h>

enum Level{
    LOW = 5,
    MEDIUM, // 6
    HIGH //7 // RANDOM VALUES CAN ALSO BE ASSIGNED TO LOW MEDIUM & HIGH
};


int main(){
    enum Level var1 = HIGH;
    printf("%d", var1);

    
}