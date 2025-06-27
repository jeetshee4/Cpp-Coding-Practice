#include <iostream>

using namespace std;

int main () {
   
    int n;
    cout<<"Enter the number:";
    cin>>n;



    // Outer loop 1

    for(int i = 1 ; i <= n ; i++)
    {
       
        // for spaces 
       for(int j = 1 ; j <= n - i ; j++ )
       {
          cout<<" ";
       }
       
       // Now Stars with Spaces

       for (int l = 1 ; l <= i ; l++)
       {
          cout<<"* ";
       }

      cout<<endl;
  


    }


    // Outer Loop 2

    for(int i = n ; i >= 1 ; i--)
    {
       
        // for spaces 
       for(int j = 1 ; j <= n - i ; j++ )
       {
          cout<<" ";
       }
       
       // Now Stars with Spaces

       for (int l = 1 ; l <= i; l++)
       {
          cout<<"* ";
       }

      cout<<endl;
  


    }

  



    return 0;
}