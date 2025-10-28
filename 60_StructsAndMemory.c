#include<stdio.h>
#include<stdlib.h> 
#include<string.h> 

struct Car
{
    char brand[50];
    int year;
};

int main(){
    //Allocating memory for a struct car
    struct Car *ptr = (struct Car*) malloc(sizeof(*ptr));

    // to check if memory allocation was successful
    if (ptr == NULL) {
        printf("Memory allocation failed\n");
        return 1; 
    }

    //Assigning values to the struct members
    strcpy(ptr->brand, "Toyota");
    ptr->year = 2020;

    printf("Car Brand: %s\n", ptr->brand);
    printf("Car Year: %d\n", ptr->year);

    free(ptr);
}
