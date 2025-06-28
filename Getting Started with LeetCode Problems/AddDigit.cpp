#include <iostream>

using namespace std;

int main () {

    int num;
    cin>>num;

    

    

   while (num > 9) {     //Remember this condition , this is recursive motion

    int rem = 0;
    int ans = 0;
    while(num > 0)
    {
       rem = num % 10;

       ans  = ans + rem;
 
       num /= 10;

    }
     num =  ans;
   }
 
    cout<<num;



    return 0;
}


