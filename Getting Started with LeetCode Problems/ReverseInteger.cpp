#include <iostream>
#include <climits>

using namespace std;

int main () {

    int num;
    cin>>num;

    int ans = 0 , rem = 0;

    while (num != 0)  // not > 0 as to handle the negative numbers
    {
        rem = num % 10;

        if (ans > INT_MAX/10 || ans < INT_MIN/10 )

        ans = ans * 10 + rem;

        num /= 10;

    }

    cout<<ans;

    return 0;
}