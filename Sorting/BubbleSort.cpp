#include <iostream>

using namespace std;

int main ()
{
    int arr[10];
    
    int n = 10;

    for(int i = 0 ;i < 10 ; i++)
    {
        cin>>arr[i];
    }

    // Now the Optimal Bubble Sort Code
    // 0 1 2 3 4 5  6 7 8 9<- ind |i|
   //  ^ ^ ^ ^ ^ ^  ^ ^ ^   r1 0 - 8 (10 - 2)
   //  ^ ^ ^ ^ ^ ^  ^ ^     e2 0 - 7
   //  ^ ^ ^ ^ ^ ^  ^       r3 0 - 6
   //  ^ ^ ^ ^ ^ ^          r4 0 - 5
   //  ^ ^ ^ ^ ^            r5 0 - 4
   //  ^ ^ ^ ^              r6 0 - 3
   //  ^ ^ ^                r7 0 - 2
   //  ^ ^                  r8 0 - 1
   //  ^                    r9 0 - 0

    for (int i = n - 2 ; i >= 0 ; i--)
    {
        bool swapped = false;

        for(int j = 0 ; j <= i ; j++)
        {
            if (arr[j] > arr[j+1])
            {
                swap(arr[j] , arr[j+1]);
                swapped = true;
            }

        }
        if (swapped == 0)
        {
            break;
        }
    }


    for(int i = 0 ;i < 10 ; i++)
    {
        cout<<arr[i]<<" ";
    }

    

    return 0;
}