#include <iostream>

using namespace std;

int main () {

   int n;
   cout<<"Enter the row number:";
   cin>>n;


   //Outer Loop 1
   for(int i = n ; i >= 1 ; i--)
   {

     // First section 1

     for (int j = 1 ; j <= i ;j++)
     {
        cout<<"*"<<" ";
     }

     for(int l = 1 ; l<= n - i ; l++)
     {
        cout<<" "<<" ";
     }

     // Second Section 2
     for(int k = 1 ; k <= n - i ; k ++)
     {
         cout<<" "<<" ";
     }
     for(int m = 1 ; m <= i ;m++)
     {
        cout<<"*"<<" ";
     }
         
    cout<<endl;

   }

   //Outer Loop 2
   for(int x = 1 ; x <= n ; x++) {
     
     //First section 1
   
    for (int y = 1 ; y <= x ; y++)
    {
       cout<<"*"<<" "; 
    }

     for(int z = 1 ; z <= n - x ; z++)
     {
        cout<<" "<<" ";
     }

     // Second Section 2
     for(int z = 1 ; z <= n - x ; z++)
     {
        cout<<" "<<" ";
     }
 
    for (int y = 1 ; y <= x ; y++)
    {
       cout<<"*"<<" "; 
    }
     
    cout<<endl;
   }



    return 0;
}