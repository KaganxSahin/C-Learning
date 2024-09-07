#include<stdio.h>

void square(int length);

int main(){
    int length;
    length=5;

    square(length);

    return 0;
}
void square(int length){
    int i,j;

    for(i=0;i<length;i++){

        for(j=0;j<length;j++){

            printf("* ");
        }
        printf("\n");
    }
}