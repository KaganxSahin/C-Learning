#include<stdio.h>
int main(){
    int num,*p;

    num=1911;

    printf("%d\n",num);
    printf("%x\n",&num);

    p=&num;
    printf("%d\n",*p);
    printf("%x\n",&*p);
    printf("%d",num);

    *p=1283;
    printf("%d\n",num);
    printf("%d\n",*p);
    printf("%x\n",&*p);
    printf("%x",&num);

    return 0;
}