#include<stdio.h>
int main(){

const float pi = 3.141592;
int choice;
float radius,area,circumference;

printf("Area or Circumference");
printf("\n1:Area");
printf("\n2:Circumference");
printf("\nEnter which you want to calculate:");
scanf("%d",&choice);

switch (choice){

    case 1:
    printf("Enter radius:");
    scanf("%f",&radius);
    area = pi*radius*radius;
    printf("Area:%f",area);
    break;

    case 2:
    printf("Enter radius:");
    scanf("%f",&radius);
    circumference = 2*pi*radius;
    printf("Circumference:%f",circumference);
    break;

    case 3:
    printf("Invalid choice");
    break;

    }

    return 0;
}