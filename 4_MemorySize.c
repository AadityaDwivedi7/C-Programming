#include<stdio.h>
int main(){
    int myint;
    float myflt;
    char mychar;
    double mydbl;

    printf("%zu\n", sizeof(myint));
    printf("%zu\n", sizeof(myflt));
    printf("%zu\n", sizeof(mychar));
    printf("%zu\n", sizeof(mydbl));
}