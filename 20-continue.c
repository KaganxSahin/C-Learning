#include<stdio.h>
int main(){
int i = 0;

while (i<10) {

  if (i == 4) {
    i++;          //When the value of i is 4, it is incremented by 1 and becomes 5
    continue;
  }

  printf("%d\n", i);
  i++;
}

    return 0;
}

/* 
Second way with for loop

#include<stdio.h>
int main(){
    int i;
    for(i=1;i<=10;i++){
        if(i==5){
            continue;
        }
        printf("%d\n",i);
    }
    return 0;
}

*/