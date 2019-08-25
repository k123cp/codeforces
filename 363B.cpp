#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    long long n, k, x, mi = (long long) 1e16, pos;
    cin >> n >> k;
    long long sum[n];
    vector<int> v(n);
    for( int i = 0; i < n; i++ )
    {
        cin >> v[i];
        if ( i == 0 ) sum[0] = v[0];
        else sum[i] = sum[i-1] + v[i];
    }
    for( int i = 0; i < n - k + 1; i++ )
    {
        if ( i == 0 ) x = sum[i+k-1];
        else x = sum[i+k-1] - sum[i-1];
        if ( x < 0 ) x *= 1;
        if ( mi > x )
        {
            mi = x;
            pos = (long long) i;
        }
    }
    cout << pos + 1;
    return 0;
}
