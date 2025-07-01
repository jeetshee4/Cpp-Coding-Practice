#include <iostream>

using namespace std;


// void swap (int * a , int * b)
// {
//     int temp = (*b);
//     (*b) = (*a);
//     (*a) = temp; 
// }





int main () 
{
    int arr[6];
    int n = 6;
    for(int i = 0 ; i < n;i++)
    {
       cin>>arr[i];
    }

    // Now Basically we need to do the Selection Sort stuff
    
    for (int i = 0 ; i < n - 1 ; i++)
    {
        int index = i;

        for (int j = i + 1 ; j < n ; j++)
        {
            if (arr[j] < arr[index])
            {
                index = j; //It will keep updating the index 

            }



        }

        // Now as the minimum element is already in the index , now it's time to swap it with the ith element(key)
        
        swap(arr[i] , arr[index]);

    }

   for(int i = 0 ; i < n; i++)
   {
      cout<<arr[i]<<" ";
   }


    return 0;
}