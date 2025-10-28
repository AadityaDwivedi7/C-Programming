#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr1, *ptr2, size;

    //allocating memory for 4 integers
    size = 4*sizeof(*ptr1);
    ptr1 = malloc(size);
    printf("%d bytes allocated at %p\n", size, ptr1);

    //resizing the memory to hold 6 integers
    size = 6*sizeof(*ptr1);
    ptr2 = realloc(ptr1, size);
    printf("%d bytes reallocated at %p\n", size, ptr2);

    //free() functions is used to free the allocated memory
    //free(ptr2);
}