#include<stdio.h>
int main(){
    int matrix[2][3] = {{2, 5, 8}, {8, 3, 1}};
    int i, j;
    for (size_t i = 0; i < 2; i++)
    {
        for (size_t j = 0; j < 3; j++)
        {
            printf("%d\n", matrix[i][j]);
        }
        
    }
    
}