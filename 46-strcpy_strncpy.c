#include<stdio.h>
#include<string.h>
int main(){
    char original[20]="Soyuz & Apollo";

    char copy[20]="";
    char copyn[20]="";

    strcpy(copy,original);
    strncpy(copyn,original,5);

    printf("%s\n",copy);
    printf("%s",copyn);

    return 0;
}