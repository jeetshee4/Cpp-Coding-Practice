#include <iostream>

using namespace std;

int main () {

    int row;
    cin>>row;

    int name = 'A';
    for(int i = 1 ; i<= row ;i ++)
    {
        for(int j= 1 ; j <= row - i ; j++)
        {
            cout<<" "<<" ";
        }
        for(int  l =   1; l <=  i ; l++)
        {
            char temp = name + l - 1; 
            cout<<temp<<" ";
        }
        cout<<endl;

    }


    return 0;
}