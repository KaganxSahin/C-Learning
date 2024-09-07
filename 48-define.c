#include<stdio.h>
#include<math.h>
#define G 6.67430*pow(10,-11)
int main(){
    double m1,m2,r,F;

    m1=5972*pow(10,24); //earth mass
    m2=1989*pow(10,30); //sun mass
    r=149.6*pow(10,9);  //1AU

    F=(G*m1*m2)/(r*r);

    printf("%lf N",F);

    return 0;

}