#include <iostream>

using namespace std;

int main () {
 
    int n;
    cout<<"Enter the row number:";
    cin>>n;

    for(int i = 1 ; i<= n; i++)
    {

       //First the space Triangle
       for(int j = 1 ; j <= n - i ; j++){
          cout<<" "<<" ";

       }

       //Then the Flipped Triangle 

       for(int l = 1 ; l <= i ; l++) {
          cout<<"*"<<" ";
       }

       //Then the Normal Triangle printing * , (i - 1) times
  
       //Understand the Logic well. k=1 , 1 not <= 0 , so * will not be printed
       for(int k = 1; k <= i-1 ; k++) {
           cout<<"*"<<" ";
       }
  
      cout<<endl;

    }
    




    return 0;
}