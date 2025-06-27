#include <iostream>

using namespace std;

int main () {
  
    int n;

    cout<<"Enter the Number:";
    cin>>n;


    for(int i = n ; i >=  1 ; i-- )
    {

        // First Print the Spaces
        for(int j = 1 ; j <= n - i ;j++)
        {
            cout<<" "<<" ";
        }

        // Then print the * 

        for (int l = 1 ; l <= 2 * i - 1 ;  l ++)
        {
            cout<<"*"<<" ";
        }

        cout<<endl;
    }





    return 0;
}