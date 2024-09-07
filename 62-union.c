#include<stdio.h>
union person {
  int age;       // Member to store age (4 bytes)
  int newage;    // Another member to store a different age (also 4 bytes)
};

int main() {
  union person x;  

  x.age = 19;// Assign 19 to x.age (overwrites any previous value in the union)
  printf("%d\n", x.age);  // Output: 19 (correct value)

  x.newage = 20;// Assign 20 to x.newage (overwrites the value in x.age since they share memory)
  printf("%d\n", x.age);  // Output: 20 (value of x.newage, not the original 19)

  x.age = 19;// Reassign 19 to x.age (overwrites the value in x.newage)
  printf("%d\n", x.age);  // Output: 19 (correct value)

  printf("%d\n", x.newage);  // Print x.newage (holds the overwritten value from x.age)
  // Output: 19 (not the original 20)

  x.newage = 20;// Assign 20 to x.newage (overwrites the value in x.age)
  printf("%d\n", x.age);  // Output: 20 (value of x.newage, not the previous 19)

  printf("%d\n", x.newage);  // Print x.newage (holds the latest overwritten value)
  // Output: 20 (correct value)
  
  return 0;
}
