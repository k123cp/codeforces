#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

typedef long long ll;

int main()
{
    int n, a = 0, b = 0;
    string s, m;
    cin >> n >> s >> m;
    int dp[10] = {0}, dps[10] = {0};
    for( int i = 0; i < n; i++ )
    {
        dp[m[i] - '0']++; dps[m[i] - '0']++;
    }

    for( int i = 0; i < n; i++ )
        for( int j = 0; j < 10 - (s[i] - '0'); j++ )
            if ( dp[s[i] - '0' + j] > 0 )
            {
                a++; dp[s[i] - '0' + j]--; break;
            }
    for( int i = 0; i < n; i++ )
        for( int j = 1; j < 10 - (s[i] - '0'); j++ )
            if ( dps[s[i] - '0' + j] > 0 )
            {
                b++; dps[s[i] - '0' + j]--; break;
            }

    cout << n-a << endl << b;
    return 0;
}
