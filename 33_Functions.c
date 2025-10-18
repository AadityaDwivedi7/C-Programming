#include<stdio.h>
void func(char name[]){
    printf("Hello %s\n", name);
}

void func2(char place[], int age){
    printf("Location is %s and age is %d\n", place, age);
}

void sum(int x, int y){
    int sum = x + y;
    printf("Sum is %d\n", sum);
}

int main(){
    func("Suresh");
    func("Ramesh");
    func2("Ujjain", 17);
    func2("Indore", 33);
    sum(2, 8);
    sum(6, 12);

}