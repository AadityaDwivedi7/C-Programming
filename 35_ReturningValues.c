#include<stdio.h>

int func(int x){
    return 5 +x;
}
int myFunction(int x, int y) {
  return x + y;
}




 
int main(){
    printf("%d\n", func(5));
    printf("Result is: %d", myFunction(5, 3));
}