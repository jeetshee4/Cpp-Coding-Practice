#include <iostream>

using namespace std;

int main ()
{ 
    int row;
    cin>>row;
    
    char name = 'a';

    for(int i = 1 ; i <= row ; i++) {
        for(int j = 1 ; j <= i ; j++){
            char temp = name + i - 1;
            cout<<temp<<" ";

        }
        cout<<endl;
    }


    return 0;
}