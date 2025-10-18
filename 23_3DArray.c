#include<stdio.h>
int main(){
    int d3[2][4][3] = {{{1, 2, 3}, {4,5,6}, {7, 8, 9}, {10, 11, 12}} , 
    {{13, 14, 14},{16, 17 , 18},{19,20,21}, {22,23,24}}};
    printf("%d\n", d3[0][0][0]); // to access one element 

    //LOOPING TO PRINT THE WHOLE ARRAY

    for (size_t i = 0; i < 2; i++)
    {
        for (size_t j = 0; j < 4; j++)
        {
            for (size_t k = 0; k < 3; k++)
            {
                printf("%d\t ", d3[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
    
    
}