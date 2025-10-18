#include<stdio.h>
int main(){
    int num;
    printf("Enter a number\n ");
    scanf("%d", &num);
    printf("your number is: %d\n", num);

    //MULTIPLE INPUTS -->
    int mynum;
    char mychar;
    printf("ENTER A NUMBER AND A CHARACTER: \n");
    scanf("%d %c", &mynum, &mychar);
    printf("THE NUMBER IS: %d \n", mynum);
    printf("THE CHARACTER IS: %c \n", mychar);

    // TAKING STRING INPUT
    char name[30];
    printf("ENTER YOUR NAME: \n");
    scanf("%s", &name);
    printf("NAME IS %s", name);
}