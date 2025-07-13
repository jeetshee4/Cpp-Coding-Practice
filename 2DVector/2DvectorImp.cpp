#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main ()
{
   
    int row, col;
    cout<<"Enter rows and columns:";
    cin>>row>>col;
   

   vector<vector<int> > matrix(row , vector<int>(col,1));

   for (int i = 0 ; i < row ; i++)
   {
      for(int j = 0 ; j < col ; j++)
      {
         cin>>matrix[i][j];
      }
      
   }




   for (int i = 0 ; i < row ; i++)
   {
      for(int j = 0 ; j < col ; j++)
      {
         cout<<matrix[i][j]<<" ";
      }
      cout<<endl;
   }


   cout<<"Rows = "<<matrix.size()<<endl;

   cout<<"Col = "<<matrix[0].size()<<endl;

   
   
   



    return 0;
}