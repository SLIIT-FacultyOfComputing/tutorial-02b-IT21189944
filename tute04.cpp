/*Exercise 4 - Functions

Write a program to calculate the function called nCr which is defined as

nCr = n!/ r!(n−r)!
Where n! is the factorial of n.

Implement the functions

long Factorial(int no);
long nCr(int n, int r);
Do not modify the main function.*/

#include <iostream>

long Factorial(int no);
long nCr(int n, int r);

int main() {
  int n, r;
  std::cout << "Enter a value for n ";
  std::cin >> n;
  std::cout << "Enter a value for r ";
  std::cin >> r;
  std::cout << "nCr = ";
  std::cout << nCr(n,r);
  std::cout << std::endl;
  return 0;
}
 
long nCr(int n, int r){
  long ncr;
  float fac = 1,fac2 = 1,fac3 = 1;
  int j;
  
  j = n-r;
  
    for (n; n >= 1; n--){
    fac *= n;
  }
  
    for (r; r >= 1; r--){
    fac2 *= r;
  }
  
    for (j; j > 0; j--){
    fac3 *= j;
  }
  
  ncr = (long)fac/(fac2 * fac3);
  return ncr;
 
}


