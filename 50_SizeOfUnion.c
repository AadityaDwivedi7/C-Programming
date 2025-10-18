#include<stdio.h>

union myunion
{
    int i;
    char l;
    char s[30];
};

int main(){
    union myunion un;
    printf("Size of Union: %zu Bytes ", sizeof(un));
}
