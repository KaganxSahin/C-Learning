#include<stdio.h>
int main(){
int x,y;

printf("Enter first number:");
scanf("%d",&x);

printf("Enter last number:");
scanf("%d",&y);

printf("Numbers:\n");

while(x<=y){

    printf("%d\n",x);
    x++;

}
 
    return 0;
}