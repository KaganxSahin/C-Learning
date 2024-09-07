#include<stdio.h>
int main(){
    int numbers[4];
    int i;

    for(i=0;i<4;i++){
        printf("Enter %d. number:",i+1);
        scanf("%d",&numbers[i]);
    }

    printf("Numbers:\n");

    for(i=0;i<4;i++){
        printf("%d ",numbers[i]);
    }

    return 0;

}