#include<stdio.h>
int main(){
    char txt[] = "We are the so-called \"Vikings\" from the north.\n";
    char txt1[] = "This is \\ backlash\n";
    char txt2[] = "It\'s okay";
    printf("%s", txt);
    printf("%s", txt1);
    printf("%s", txt2);
}