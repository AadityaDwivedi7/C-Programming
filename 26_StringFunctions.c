#include<stdio.h>
#include<string.h>
int main(){
    char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    printf("%zu\n", strlen(alphabet));
    printf("%zu\n", sizeof(alphabet)); //sizeof also includes the \0 character when counting and gives in bytes

    char vowels[10] = "AEIOU";
    printf("%zu\n", strlen(vowels));
    printf("%zu\n", sizeof(vowels));

    char str1[20] = "Hello";
    char str2[] = " World";
    
    strcat(str1, str2);

    printf("%s", str1);
     
}