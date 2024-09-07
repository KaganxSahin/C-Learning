#include<stdio.h>
int main(){

int x,y;
float z,t;

x=5;
y=2;
z=x/y;
t=(float)x/y;

printf("%d\n",x/y);              // 2
printf("%f\n",(float)x/y);       // 2.500000
printf("%f\n",z);                // 2.000000
printf("%f",t);                  // 2.500000

return 0;
}