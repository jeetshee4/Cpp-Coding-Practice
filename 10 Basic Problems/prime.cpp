#include <iostream>

using namespace std;

void prime_number(int num)
{
   if(num < 2)
   {
     cout<<"Not prime";
   }
   else
   {
      for(int i = 2 ; i < num ; i++)
      {
        if(num % 2 == 0)
        {
            cout<<"Not Prime"<<endl;
            return;
        }    

      }

      cout<<"Prime Number"<<endl;


    }
  }


int main ()
{
    int num;
    cout<<"Enter your Number";
    cin>>num;
    prime_number(num);



}