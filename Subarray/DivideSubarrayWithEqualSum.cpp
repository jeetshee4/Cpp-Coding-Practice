#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>




using namespace std;

int divide (vector<int> &arr)
{
   int  prefix = 0;
 
   // Total Sum
    int n = arr.size();
    int total_sum = 0;

   for (int i = 0 ; i < n ; i++)
   {
      total_sum += arr[i];
   }


   for (int i= 0 ; i  < n ;i++)
   {
     prefix += arr[i];
     if (total_sum == 2*prefix)
     {
        return 1;
     }
   }
    
   return 0;


}








int main ()
{
   
    int n;
    cout<<"Enter the length of the array:";
    cin>>n;

    vector<int>v(n);
    
    for (int i = 0 ; i < n ;i++)
    {
        cin>>v[i];
    }
   

    cout<<divide(v);




    



    return 0;
}