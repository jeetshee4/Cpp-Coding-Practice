#include <iostream>

using namespace std;

int main () {

    int arr[10];

    for(int i = 0; i<10 ; i++)
    {
        cin>>arr[i];
    }

    // Reverse it

    int low = 0;
    int high = 9;

    while (low < high)
    {
        int temp = arr[low];
        arr[low] = arr[high];
        arr[high] = temp;
        
        low ++;
        high--;
    }


    for(int i = 0; i<10 ; i++)
    {
       cout<<arr[i]<<" ";
    }


    return 0;
}