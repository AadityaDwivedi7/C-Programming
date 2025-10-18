// Structures (also called structs) are a way to group several related variables into one place.
//Each variable in the structure is known as a member of the structure.
//Unlike an array, a structure can contain many different data types (int, float, char, etc.).

#include<stdio.h>

struct mystruct{
    int mynum;
    char mychar;
};

int main(){
    struct mystruct s1;

    s1.mynum = 5;
    s1.mychar = 'A';

    printf("%d\n", s1.mynum);
    printf("%c\n", s1.mychar);

    //Different Variables can also be created 
    struct mystruct s2;
    s2.mychar = 'B';
    s2.mynum = 100;

    printf("%d\n", s2.mynum );
    printf("%c\n", s2.mychar);
}
    
