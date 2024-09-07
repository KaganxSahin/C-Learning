#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int i,number;

    srand(time(NULL));

    //A loop that will run 10 times for 10 numbers
    for(i=1;i<=10;i++){
        number=rand()%10+1;  //If we do not write +1, 0 is also included

        printf("%d.number: %d\n",i,number);
    }

    return 0;
}