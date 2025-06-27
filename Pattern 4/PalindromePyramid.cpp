#include <iostream>

using namespace std;


int main () {
    
    int n;
    cout<<"Enter the Number:";
    cin>>n;

    for (int i = 1 ; i <= n ; i++)
    {
         
        // Print the Spaces
        for(int j = 1 ; j <= n - i ; j++)
        {
            cout<<" "<<" ";
        }
  

        // Print the Integers from 1 to i
        for(int l = 1 ; l <= i ; l ++){
           cout<<l<<" ";
        }

        // Print i - 1  to 1 integers
         for(int k = i - 1 ; k >= 1 ; k--) {
            cout<<k<<" ";
         }

        cout<<endl;
    }





    return 0;
}