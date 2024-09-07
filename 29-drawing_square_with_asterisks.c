#include<stdio.h>
int main(){
    int i,j,length;

    printf("Enter length:");
    scanf("%d",&length);

    for(i=1;i<=length;i++){

        for(j=1;j<=length;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}