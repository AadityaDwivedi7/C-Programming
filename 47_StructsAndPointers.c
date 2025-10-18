#include<stdio.h>

struct Car
{
    char brand[30];
    int year;
};

int main(){
    struct Car car = {"Toyota", 2013};
 
    //declaring a pointer to the struct
    struct Car *ptr = &car;
    
    printf("Brand: %s\n", ptr->brand);
    printf("Year: %d", ptr->year);    
}

