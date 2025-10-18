#include<stdio.h>

int main(){

    enum Level{
        LOW, //0
        MEDIUM, //1
        HIGH //2
    };

    enum Level var1 = MEDIUM;
    printf("%d", var1);

}