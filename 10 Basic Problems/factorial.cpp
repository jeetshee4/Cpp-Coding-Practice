#include <iostream>

using namespace std;

int factorial (int n)
{
  int fact = 1 ;
 for (int k= 1 ; k<= n ; k++)
 {
   fact = fact*k;
 }
 return fact;

}

int main () {
 
  int num;
  cout<<"Enter the Number:";
  cin>>num;

  int fact = factorial(num);

  cout<<"The Factorial of number num is:"<<fact<<endl;

  return 0;

}