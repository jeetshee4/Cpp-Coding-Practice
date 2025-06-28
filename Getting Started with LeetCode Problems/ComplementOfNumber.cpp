#include <iostream>

using namespace std;



// The Problem is to convert the Number into it's Complement..For that we need to do the Binary Function of the Numeber but when each of the bits are got , we will be multiplying the 2^i with it. 

int main () {
 
    int num;
    cout<<"Enter the Number";
    cin>>num;

    int mul = 1;
    int bit = 0;
    int sum = 0;
    while (num)
    {
       bit = num % 2;
       if(bit == 1)
         bit = 0;
       else
       {
          bit = 1;
       }
       sum += bit * mul;
       mul = mul * 2;
       num = num / 2;


    }
  
    cout<<"The Complement is:"<<sum;



    return 0;
}