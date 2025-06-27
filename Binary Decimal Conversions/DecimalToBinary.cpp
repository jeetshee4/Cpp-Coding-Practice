//This code will work only for Small Size Integers , not very large Integers , for that we need to Use strings method

#include <iostream>

using namespace std;

int main () {
    
    int num;
    cout<<"Enter the Number:";
    cin>>num;

    int rem = 0 , ans = 0 ,mul = 1;

    while( num  > 0)
    {
       rem = num % 2; // num & 1
    
       ans = rem * mul + ans;

       num = num / 2; // num >> 2

       mul = mul * 10;


    }

    cout<<"The binary number is:"<<ans;





    return 0;

}