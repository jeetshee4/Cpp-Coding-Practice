#include <iostream>

using namespace std;

int main () {

    int row;
    cin>>row;

    for(int i = row ; i >= 1 ; i--){
        for(int j = row ; j >= i ; j-- ){
           cout<<j<<" " ;
        }
        cout<<endl;
    }



    return 0;
}