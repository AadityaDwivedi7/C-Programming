#include<stdio.h>
#include<string.h>

struct Owner
{
    char firstname[30];
    char lastname[30];
};

struct Car
{
    char brand[30];
    int year;
    struct Owner owner; // NESTED STRUCTURE
};

int main(){
    struct Owner person = {"DANK", "JOE"};
    struct Car car1 = {"Suzuki", 2019, person};
    
    printf("Car: %s (%d)\n", car1.brand, car1.year );
    printf("Owner: %s %s", car1.owner.firstname, car1.owner.lastname);

    
    
}

