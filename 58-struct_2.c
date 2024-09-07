#include<stdio.h>
#include <string.h>

struct student {
    int id;
    char* name;
    char lesson [20];
    int midterm;
    int final;
    double average;
};

int main(){

    struct student x = {220513375,"Kagan Sahin","Physics",100,100,(x.midterm + x.final)/2};

    printf("%s %d\n",x.name,x.id);
    printf("%s Grades:\n",x.lesson);
    printf("Midterm exam: %d\n",x.midterm);
    printf("Final exam: %d\n",x.final);
    printf("Average: %f",x.average);

    return 0;
}
