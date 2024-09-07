#include<stdio.h>
int fact(int num);

int main(){
    int num;

    printf("Enter num:");
    scanf("%d",&num);

    printf("%d factoriel:%d",num,fact(num));

    return 0;
}
int fact(int num){
    int i,fact;

    fact=1;

    for(i=1;i<=num;i++){

        fact=fact*i;

    }

    return fact;
}