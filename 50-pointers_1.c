#include<stdio.h>
int main(){
    int num;
    int *p;

    num=1911;
    p=&num;

    printf("%d",*p);
    printf("\n%d",num);

    return 0;
}