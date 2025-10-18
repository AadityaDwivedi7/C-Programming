#include<stdio.h>
void myfunc(int numarr[5]){
    int i;
    for (size_t i = 0; i < 5; i++)
    {
        printf("%d\n", numarr[i]);
    }
}
int main(){
    int numarr[5] = {20 ,10 ,44, 12, 22};
    myfunc(numarr);
}
    
