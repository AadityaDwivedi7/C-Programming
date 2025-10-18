//program to create a function that results sum of two numbers and stores them in an array
#include<stdio.h>

int calcsum(int x, int y){
    return x + y;
}


int main(){

    int myarr[6];
    myarr[0] = calcsum(2, 3);
    myarr[1] = calcsum(5, 8);
    myarr[2] = calcsum(8, 3);
    myarr[3] = calcsum(4, 2);
    myarr[4] = calcsum(5, 1);
    myarr[5] = calcsum(9, 0);

    for (size_t i = 0; i < 6; i++)
    {
        printf("The arrays element %d is : %d\n", i+1, myarr[i]);    
    }
    


}