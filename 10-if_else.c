#include<stdio.h>
int main(){
int age;

printf("Enter your age:");
scanf("%d",&age);

if(age>=18){
    printf("You are an adult");
}
else if(age>=15){
    printf("You are young");
}
else{
    printf("You are a child or baby");
}


return 0;

}