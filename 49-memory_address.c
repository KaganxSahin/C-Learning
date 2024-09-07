#include<stdio.h>
int main(){
    int x,y;
    float z;
    char t;

    x=12;
    y=83;
    z=3.14;
    t='A';

    printf("Memory Addresses\n");
    printf("%x\n%x\n%x\n%x",&x,&y,&z,&t);

    return 0;

}