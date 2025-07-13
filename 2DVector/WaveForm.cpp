#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;


void wave_form(vector<vector<int>>&arr)
{
    int row = arr.size();
    int col = arr[0].size();



    // Now printing the wave form 

    for (int j =  0 ; j < col ; j ++)
    {
        if ( j % 2 == 0)
        {
            for(int i =  0 ;  i< row ; i++)
            {
                cout<<arr[i][j]<<" ";
            }
        }
        else
        {
            for(int i = row - 1 ;  i >= 0 ; i--)
            {
                cout<<arr[i][j]<<" ";
            }

        }
    }
}

int main ()
{
   
   int row,col;

   cout<<"Enter the row and column:";
   cin>>row>>col;


  


   vector<vector<int>> arr(row , vector<int>(col , 0));

//     Now we need to do the task

// First take input of the array

  for (int i = 0  ; i < row ; i++)
  {
     for(int j = 0 ; j < col ; j++)
     {
        cin>>arr[i][j];    
     }
  }


  wave_form (arr);






    return 0;
}