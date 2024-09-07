#include<stdio.h>
#include<string.h>
int main(){
    char arr[50];

    printf("Enter word:");
    gets(arr);

    printf("Number of letters %d",strlen(arr));

    return 0;

}