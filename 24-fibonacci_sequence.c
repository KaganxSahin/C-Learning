#include<stdio.h>
int main(){
    int i,first,second,temp;

    first=1;
    second=1;

    printf("%d\n%d\n",first,second);

    for(i=0;i<20;i++){
        temp=second;
        second+=first;
        first=temp;

        printf("%d\n",second);
    }
    return 0;
}