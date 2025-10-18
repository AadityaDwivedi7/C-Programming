#include <stdio.h>
int main()
{
    // Expression 1 is executed (one time) before the execution of the code block.
    //  Expression 2 defines the condition for executing the code block.
    //  Expression 3 is executed (every time) after the code block has been executed.

    int i;
    for (i = 0; i < 5; i++)
    {
        printf("%d\n", i);
    }
    int sum = 0;
    int x;
    for (x = 1; x <= 5; x++)
    {
        sum = sum + x;
    }
    printf("%d\n", sum);

    // Countdown Through for loop
    int y ;
    for (y=3; y>0; y--){
        printf("%d\n", y);
    }
}