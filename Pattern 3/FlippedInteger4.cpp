#include <iostream>

using namespace std;

int main () {

    int row;
    cin>>row;

    for(int i = 1 ; i<= row ;i ++)
    {
        for(int j= 1 ; j <= row - i ; j++)
        {
            cout<<" "<<" ";
        }
        for(int l =  i ; l >= 1 ; l--)
        {
            cout<<l<<" ";
        }
        cout<<endl;

    }


    return 0;
}