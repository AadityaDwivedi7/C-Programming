// The malloc() function has one parameter, size, which specifies how much memory to allocate, measured in bytes.

// The calloc() function has two parameters:

// amount - Specifies the amount of items to allocate
// size - Specifies the size of each item measured in bytes

#include<stdio.h>
#include<stdlib.h> //necessary for using malloc() & calloc()

int main(){

int *ptr1, *ptr2;
ptr1 = malloc(sizeof(*ptr1));
ptr2 = calloc(1, sizeof(*ptr2));

int *students;
int numstudents = 12;
students = calloc(numstudents, sizeof(*students));
printf("%d", numstudents*sizeof(*students));
}