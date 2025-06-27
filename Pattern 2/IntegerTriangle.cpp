#include <iostream>

using namespace std;

int main()
{

    int row;
    cin >> row;

    for (int j = 1 ; j <= row ; j++)
    {
        for (int i = 1; i <= j; i++)
        {
            cout << i << " " ;
        }
        cout<<endl;
    }

    return 0;
}