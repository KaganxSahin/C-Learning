#include<stdio.h>
#include<math.h>
int main(){
    double num,rootvalue,expvalue,logvalue,sinvalue,cosvalue,cotvalue,tanvalue,highvalue,lowvalue;

    printf("Enter number:");
    scanf("%lff",&num);

    rootvalue= sqrt(num);
    expvalue= pow(num,2);
    logvalue= log(num);
    sinvalue= sin(num);
    cosvalue= cos(num);
    tanvalue= tan(num);
    cotvalue= 1/tan(num);
    highvalue= ceil(num);
    lowvalue= floor(num);

    printf("Square root of %.2f: %.2f\n", num, rootvalue);
    printf("Square of %.2f: %.2f\n", num, expvalue);
    printf("Natural logarithm of %.2f: %.2f\n", num, logvalue);
    printf("Sine of %.2f: %.2f\n", num, sinvalue);
    printf("Cosine of %.2f: %.2f\n", num, cosvalue);
    printf("Tangent of %.2f: %.2f\n", num, tanvalue);
    printf("Cotangent of %.2f: %.2f\n", num, cotvalue);
    printf("Ceiling of %.2f: %.2f\n", num, highvalue);
    printf("Floor of %.2f: %.2f\n", num, lowvalue);

    return 0;
}