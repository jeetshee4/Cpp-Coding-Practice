#include <iostream>
#include <vector>


using namespace std;

int main ()
{
    int n;
    cout<<"Enter the Length"<<endl;
    cin>>n;
 

    
    vector<int> arr(n);

    int N = arr.size();

    for (int i = 0 ; i < N ; i++)
    {
        cin>>arr[i];
    }



    for (int i = N; i >= 1 ; i--)
    {
        for(int j = 0 ; j  < i ; j++ )
        {
           for(int k = j ; k < j + (N - (i - 1)) ; k++)
           {
              cout<<arr[k]<<" ";
           }
           cout<<" | ";
        }
        cout<<endl;

    }






    return 0;
}