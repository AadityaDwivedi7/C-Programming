#include<stdio.h>
#include<string.h> // this is included to use strcpy() function.
struct mystruct
{   int num;
    char letter;
    char name[200];
};

int main(){
    struct mystruct s1;
    s1.num = 4;
    // s1.name = "aaditya"; THIS WILL SHOW ERROR
    s1.letter = 'A';

    strcpy(s1.name, "SOME TEXT");
    printf("STRING: %s", s1.name);
}
