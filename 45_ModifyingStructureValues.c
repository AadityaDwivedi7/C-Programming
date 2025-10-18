#include<stdio.h>
#include<string.h>
struct mystruct
{
    int i;
    char c;
    char s[30];
};

int main(){
    struct mystruct s1 = {7, 'A', "Some text"};
    s1.i = 10;
    s1.c = 'B';
    strcpy(s1.s, "Something else");

    printf("%d %c %s", s1.i, s1.c, s1.s);


    
}



    

