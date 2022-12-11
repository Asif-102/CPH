#include "bits/stdc++.h"
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair <int, int> pi;

#define PB push_back
#define MP make_pair
#define V vector
#define F first
#define S second
#define REP(i, a, sz) for(int i = 0; i < sz; i++)

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    /* ll a;
    cin >> a;
    cout << a; */

    V<pi> a;
    int n;
    cin >> n;
    REP(i, 0, n)
    {
        int x, y;
        cin >> x >> y;
        a.PB(MP(x, y));
    }

    REP(i, 0, n)
        cout << a[i].F << " " << a[i].S << "\n";

}