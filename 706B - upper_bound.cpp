#include <bits/stdc++.h>

using namespace std;

int x[ 100000 ]; //x[n] - price of the nth shop

int main()
{
    int m, n, a;
    cin >> n;
    for( int i = 0; i < n; i++ )
        cin >> x[i];
    sort(x, x+n);
    cin >> m;
    for( int i = 0; i < m; i++ )
    {
        cin >> a;
        cout << upper_bound(x, x + n, a) - x << endl;
    }
}   //return position of first element greater than m in array x
