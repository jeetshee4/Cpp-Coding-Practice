#include <iostream>

using namespace std;

int main () {

    int row;
    cin>>row;

   
    //row level
    for(int i = 1 ;i<= row; i++) {
       
      //column level

      //row making ..
      // first there will be n - i number of white spaces
       for(int j = 1 ; j <= row - i  ;j ++) {
         cout<<" "<<" ";
       }
      // then there will be i number of * s.
       for(int l = 1 ; l <= i ; l++)
       {
          cout<<"*"<<" ";
       }
    
       cout<<endl;

    }



    return 0;
}