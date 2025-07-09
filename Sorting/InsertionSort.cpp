#include <iostream>

using namespace std;

int main ()
{
    int arr[6];
    int n = 6;
    for(int i = 0 ; i < n;i++)
    {
       cin>>arr[i];
    }


    // Insertion Sort

    for (int i = 1 ; i < n ; i++)
    {
        for (int j = i ; j > 0 ; j--)
        {
            if( arr[j] < arr[j-1])
            {
                swap(arr[j] , arr[j-1]);
            }
            else
            {
                break; // This just makes it readhy for the best case too which is O(n)
            }
        }
    }  


    for(int i = 0 ; i < n; i++)
   {
      cout<<arr[i]<<" ";
   }




    return 0;
}