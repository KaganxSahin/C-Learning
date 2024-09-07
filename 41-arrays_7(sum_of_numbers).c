#include<stdio.h>
int main(){
    int numbers[5]={10,15,20,4,17};
    int i,sum;
    sum=0;

    for(i=0;i<5;i++){
        sum=sum+numbers[i];
    }
    printf("Result:%d",sum);

    return 0;
}