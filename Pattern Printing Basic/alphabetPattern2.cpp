#include <iostream>

using namespace std;

int main ()
{

    int num;
    cin>>num;

   for(int i = 1 ; i<=num;i++)
   {
     
      for(char j='a' ; j<= 'a' + num - 1 ; j++)
      {
           
             cout<<j<<" ";
      }
      cout<<endl;
   }
   return 0;
}