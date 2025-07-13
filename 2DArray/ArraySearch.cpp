#include <iostream>

using namespace std;

int main ()
{
   int arr[5][5] = {1 , 2 , 3 , 4 , 5 , 6  ,7 , 8 , 9 , 10 ,11 ,12};


   int x;
   cin>>x;



   for(int i = 0 ; i < 5 ; i ++)
   {
     for(int j = 0  ;  j < 5 ; j++)
     {
        if (arr[i][j] == x)
        {
            cout<<"yes";
            return 0;
        }
     }
   }

   cout<<"NO";







    return 0;
}