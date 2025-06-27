#include <iostream>

using namespace std;

int main ()
{
  int num;
  cout<<"Enter the Numeber:";
  cin>>num;


 for(char j = 'a' ; j <= 'a' + num - 1 ; j++ ) {
   
  for(int i = 1 ; i <= num ; i++)
  {
      cout<<j<<" ";
 
  }
   cout<<endl;
}
 
  return 0;
}