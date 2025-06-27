#include <iostream>

using namespace std;


// The Fibonacci Series is 
// 0 1 1 2 3 5 8 13 21 34 55 89 144 233 377
// a b c   
//   a b c

int main ()
{
   int a=0;
   int b=1;
   int c = 0;
 
   int n;
   cout<<"Enter the Number of Step:";
   cin>>n;
   if(n == 1)
   {
     cout<<a;

   }
   else if(n == 2)
   {
      cout<<a<<" "<<b;

   }
   else
   {
    cout<<a<<" "<<b<<" ";
   for(int i = 0 ; i < n - 2 ;i++)
   {
      c = a + b;
      cout<<c<<" ";
      a = b;
      b = c;


   } 
  }

}
