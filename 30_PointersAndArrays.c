#include<stdio.h>
int main(){
    int num[4] = {23, 54, 12, 21};
    int i;
    for (size_t i = 0; i < 4; i++)
    {
        printf("%p\n", &num[i]);
    }

    int myNumbers[4] = {25, 50, 75, 100};

    // Get the value of the first element in myNumbers
    printf("%d\n", *myNumbers);

    
    // Get the value of the second element in myNumbers
    printf("%d\n", *(myNumbers + 1));

    // Get the value of the third element in myNumbers
    printf("%d\n", *(myNumbers + 2));
    
}