#include<stdio.h>
int main(){
    int arr[5]={29,33,34,22,10};

    int piece= sizeof(arr)/sizeof(arr[0]);

    printf("Array include %d number.",piece);

    return 0;

}