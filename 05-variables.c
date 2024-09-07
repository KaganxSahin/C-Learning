#include<stdio.h>
int main(){

int numx;         // Defined an integer named numx
float numy;       // Defined a decimal number named numy
char letx;        // Defined a letter named letx
double numz;      // Defined a high precision decimal number named numz

numx = 1283;           // Assigned the value 10 to variable numx 
numy = 3.14;           // Assigned the value 3.14 to variable numy
numz = 3.14159265359;  // Assigned the value 3.14159265359 to variable numz
letx = 'K';            // Assigned the character K to variable letx


printf("%d %f %lf %c",numx,numy,numz,letx); 

/*
Format specifiers are used together with the printf() function
to tell the compiler what type of data the variable is storing.
*/ 

return 0;
}