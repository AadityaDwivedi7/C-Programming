#include<stdio.h>
int main(){
    char greeting[] = "hello";
    printf("%s\n", greeting);
    printf("%c\n", greeting[0]);
    greeting[5] = 'o';
    printf("%s\n", greeting);
    printf("%zu\n", sizeof(greeting));

    //loop through a string
    char car[] = "Swift";
    int i ;
    for (size_t i = 0; i < 5; i++)
    {
        printf("%c\n", car[i]);
    }

    char name[] = "Aaditya";
    char surname[] = "Dwivedi";
    printf("%s %s", name, surname);
    
}