#include<stdio.h>

struct mystruct
{
    int num;
    char mychar;
    char str[20];
};

int main(){
    struct mystruct s1 = {2, 'G', "THIS IS A STRING"};
    printf("%d " "%c " " %s", s1.num, s1.mychar, s1.str);

    // To Copy a Structure
    struct mystruct s2;
    s2 = s1;
    printf("\nCOPIED-> %d " " %c" " %s", s2.num, s2.mychar, s2.str);
}