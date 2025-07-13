// Here , we will print the row number of a matrix which have the maximum sum of the elements in the row

#include <iostream>
#include <climits>

using namespace std;

int main ()
{
    int arr[5][4] = {3,4,7,18,
                     2,8,3,9,
                     5,4,2,2,
                     7,3,0,8,
                     2,8,9,1};


    int max_sum  = INT_MIN;
    int index = -1;
    for(int i = 0 ; i < 5 ; i++)
    {
        int sum = 0;
       for(int j = 0 ; j < 4 ; j++)
       {
          sum+= arr[i][j];
       }

       if(sum > max_sum)
       {
         max_sum = sum;
         index = i;
       }
    }


    cout<<"The max sum is:"<<max_sum<<" With index: "<<index;



    return 0;
}