/*A union is similar to a struct in that it can store members of different data types.

However, there are some differences:

In a struct, each member has its own memory.
In a union, all members share the same memory, which means you can only use one of the values at a time.*/

#include<stdio.h>
union myUnion
{
    int mynum;
    char myletter;
    char mystr[30];
};

int main(){
    union myUnion un;
    un.mynum = 1000;

    //Since this is the last value written to the union, myNum no longer holds 1000 - its value is now invalid
    un.myletter = 'A';

    printf("myNum: %d\n", un.mynum); // This value is no longer reliable
    printf("myLetter: %c\n", un.myletter); // Prints 'A'
}
