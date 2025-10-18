#include<stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("filename.txt", "w");
    fprintf(fptr, "Some text is added");
    fclose(fptr);
}