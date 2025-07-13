#include <iostream>

using namespace std;

int main ()

{
    int arr[4][4] = {5, 8 ,3 ,9,
                     6 ,2 , 8 ,4,
                     5 , 3 , 2 , 2,
                     2 , 8 , 1 , 9};
    int First = 0 ;
    // 00 11 22 33
    
    for (int i = 0 ;i < 4 ;i++)
    {
        First += arr[i][i];
    }

    // now the second diagonal

    int second = 0;

    // 03 12 21 30
    int i = 0;
    int j = 3; // row - 1
    while (i < 4)
    {
       second += arr[i][j];
       i++;
       j--;

    }


    cout<<"The sum of the first diagonal is:"<<First<<endl;
    cout<<"The sum of the second diagonal is:"<<second<<endl;



    return 0;
}


















