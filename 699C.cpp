#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    int dp[100][3];
    for( int i = 0; i < 100; i++ )
        for( int j = 0; j < 3; j++ )
            dp[i][j] = 1000;
    cin >> n;
    vector<int> v(n);
    for( int i = 0; i < n; i++ )
    {
        cin >> v[i];
        if ( i == 0 )
        {
            dp[0][0] = 1;
            if ( v[i] == 1 || v[i] == 3 ) dp[0][1] = 0;
            if ( v[i] == 2 || v[i] == 3 ) dp[0][2] = 0;
            continue;
        }
        dp[i][0] = 1 + min( dp[i-1][0], min( dp[i-1][1], dp[i-1][2]));
        if ( v[i] == 1 || v[i] == 3 )
            dp[i][1] = min(dp[i-1][0], dp[i-1][2]);
        if ( v[i] == 2 || v[i] == 3 )
            dp[i][2] = min(dp[i-1][0], dp[i-1][1]);
    }
    if ( v[n-1] == 0 ) cout << dp[n-1][0];
    if ( v[n-1] == 1 ) cout << min( dp[n-1][0], dp[n-1][1] );
    if ( v[n-1] == 2 ) cout << min( dp[n-1][0], dp[n-1][2] );
    if ( v[n-1] == 3 ) cout << min( dp[n-1][0], min( dp[n-1][1], dp[n-1][2]));
    return 0;
}
