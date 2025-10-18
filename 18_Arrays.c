#include<stdio.h>
int main(){
    int mynum[] = {10 , 24, 32, 98, 45};
    printf("%d\n", mynum[0]);
    mynum[0] = 20;
    printf("%d\n", mynum[0]);
}