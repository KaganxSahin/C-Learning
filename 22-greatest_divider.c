#include<stdio.h>
int main(){
    int i,divider,num;

    printf("Enter number:");
    scanf("%d",&num);

    for(i=num/2;i>=1;i--){

        if(num%i==0){
            divider=i;
            break;
        }
    }

    printf("Greatest divider of %d : %d",num,divider);
    return 0;
}