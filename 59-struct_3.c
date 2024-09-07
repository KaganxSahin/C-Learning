#include<stdio.h>
#include<string.h>

struct plane{
    char* company;
    int generation;
    int maxvelocity; // km/h
};

int main(){
    struct plane KAAN;

    KAAN.company = "TAI";
    KAAN.generation = 5;
    KAAN.maxvelocity = 2470;


    struct plane F35;

    F35.company = "Lockheed Martin";
    F35.generation = 5;
    F35.maxvelocity = 1960;

    printf("Plane 1:\n");
    printf("Company: %s\n", KAAN.company);
    printf("Generation: %d\n", KAAN.generation);
    printf("Max Velocity: %d km/h\n\n", KAAN.maxvelocity);

    printf("Plane 2:\n");
    printf("Company: %s\n", F35.company);
    printf("Generation: %d\n", F35.generation);
    printf("Max Velocity: %d km/h\n", F35.maxvelocity);

    return 0;

}