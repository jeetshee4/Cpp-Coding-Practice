#include <iostream>

using namespace std;

int main () {

   int n;
   cin>>n;

   // Outer Loop 1
   for(int i = 1 ; i <= n; i++)
   {
        
      // First Section 1
      for(int l = 1 ; l <= i ; l++ )
      {
         cout<<"*"<<" ";
      }

      for(int k = 1 ; k <= n-i ; k++)
      {
         cout<<" "<<" "; 
      }


      // Second Section 2

      for(int k = 1 ; k <= n-i ; k++)
      {
         cout<<" "<<" "; 
      }
      
      for(int l = 1 ; l <= i ; l++ )
      {
         cout<<"*"<<" ";
      }
      
      cout<<endl;
    

   }
   

   // Outer Loop 2
   for (int j = n - 1  ; j >= 1 ; j-- )
   {


      // First Section 1

      for (int x = 1 ; x <= j  ; x++ )
      {
         cout<<"*"<<" ";
      }


      for(int y = 1 ; y <= n - j ; y++)
      {
         cout<<" "<<" ";
      }

      // Section 2

      for(int y = 1 ; y <= n - j ; y++)
      {
         cout<<" "<<" ";
      }

      for (int x = 1 ; x <= j  ; x++ )
      {
         cout<<"*"<<" ";
      }


           
      
     cout<<endl;


   }



    return 0;
}