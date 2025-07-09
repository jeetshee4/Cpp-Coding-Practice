#include <iostream>

using namespace std;


int BinarySearch (int arr[] , int n , int key)
{

    int start = 0;
    int end = n - 1;

    while(start <= end)
    {
       int mid = (start + end) /2;

       if (arr[mid] == key)
       {
         return mid;
       }
       // Right half
       else if(arr[mid] < key)
       {
          start = mid + 1;
       }
       else
       {
          end =  mid - 1;
       }

    }
 


}




int main ()
{
  
    int arr[6];
    
    int n = sizeof(arr) / sizeof(arr[0]);

    for(int i = 0 ; i < n; i++)
    {
        cin>>arr[i];
    }

    // Now Let's Implement the Binary Search on the Array
    int key;
    cout<<"Enter the Key:";
    cin>>key;

    cout<<BinarySearch(arr, n , key);






    return 0;
}