#include<stdio.h>

struct Car
{
    char brand[30];
    int year;
};

typedef struct 
{
    char brand[30];
    int year;
} Car ;

int main(){
    struct Car car1 = {"Mercedes", 1991};
    Car car2 = {"Ford", 1995};

    printf("Brand: %s, year: %d\n", car1.brand, car1.year);
    printf("Brand: %s, year: %d", car2.brand, car2.year);
}
