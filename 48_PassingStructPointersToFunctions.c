#include<stdio.h>

struct Car
{
    char brand[20];
    int year;
};

// Function that takes a pointer to a Car struct and updates the year
void updateyear(struct Car *c){
    c->year = 2025;
}

int main(){
    struct Car mycar = {"Toyota", 2019};
    updateyear(&mycar);

    printf("Brand: %s\n", mycar.brand);
    printf("Year: %d", mycar.year);
}