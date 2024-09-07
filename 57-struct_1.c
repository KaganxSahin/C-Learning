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

    struct student x;
    x.id = 220513375;
    x.name = "Kagan Sahin";
    x.midterm = 100;
    x.final = 100;
    x.average = (x.midterm+x.final)/2;

    // x.lesson = physics; Assigning values ​​to arrays is not done this way.You need to use strcpy

    strcpy(x.lesson,"Physics");

    printf("%s %d\n",x.name,x.id);
    printf("%s Grades:\n",x.lesson);
    printf("Midterm exam: %d\n",x.midterm);
    printf("Final exam: %d\n",x.final);
    printf("Average: %f",x.average);


    struct student x2;
    x2.id = 111111111;
    x2.name = "Govert Schilling";
    x2.midterm = 100;
    x2.final = 100;
    x2.average = (x2.midterm+x2.final)/2;
    strcpy(x2.lesson,"Physics");

    printf("\n\n%s %d\n",x2.name,x2.id);
    printf("%s Grades:\n",x2.lesson);
    printf("Midterm exam: %d\n",x2.midterm);
    printf("Final exam: %d\n",x2.final);
    printf("Average: %f",x2.average);

    return 0;
}
