#include<stdio.h>
int main(){
    int i,num;

    printf("Enter number:");
    scanf("%d",&num);

    printf("Odd numbers up to %d\n",num);

    for(i=1;i<=num;i++){

        if(i%2==0){              //for even numbers: if( i%2 != 0)
            continue;
        }
        printf("%d\n",i);
    }

    return 0;
}