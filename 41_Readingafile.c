#include<stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("filename.txt", "r");
    char mystr[100];
    fgets(mystr, 100, fptr);
    printf("%s", mystr);
    fclose(fptr);

}