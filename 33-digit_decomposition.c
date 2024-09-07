#include<stdio.h>
int main(){
    int num,units,tens,hundreds;

    printf("Enter 3 digits number:");
    scanf("%d",&num);

    units= num%10;
    tens=(num/10)%10;
    hundreds= num/100;

    printf("units %d\ntens %d\nhundreds %d",units,tens,hundreds);

    return 0;
}