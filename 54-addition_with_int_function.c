#include<stdio.h>
int sum(int x,int y);

int main(){

    printf("%d",sum(5,4));

    return 0;
}
int sum(int x,int y){
    int z;

    z=x+y;

    return z;
}