#include "bits/stdc++.h"
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    double x = 0.3*3 + 0.1;
    double y = 1.0;

    if(x == y)
        cout << "equal\n";
    else
        cout << "not equal\n";

    if(abs(x-y) < 1e-9)
        cout << "equal\n";
    else
        cout << "not equal\n";
}