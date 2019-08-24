#include <iostream>
#include <math.h>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    long long n, s = 0;
    cin >> n;
    vector<int> v(n);
    for( int i = 0; i < n; i++ )
    {
        cin >> v[i];
        s += v[i];
    }
    if ( s % 3 != 0 )
    {
        cout << "0";
        return 0;
    }
    s /= 3;
    long long t = 0, res = 0, ct = 0;
    for( int i = 0; i < n - 1; i++ )
    {
        t += v[i];
        if ( t == 2*s ) res += ct;
        if ( t == s ) ct++;
    }
    cout << res;
    return 0;
}
