#include <iostream>


using namespace std;


int main () {

    long long N;
    cin>>N;

    long long Sum = (N * (N + 1) * (2 * N + 1)) / 6;

    cout<<Sum;

    return 0;
}