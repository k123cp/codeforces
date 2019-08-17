#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    long long n, x, cnt = 0, g;
    cin >> n;
    for( long long i = 0; i < n; i++ )
    {
        cin >> x;
        g = __gcd(g, x);
    }

    for( long long i = 1; i*i <= g; i++ )
    {
        if ( g % i == 0 )
        {
            cnt++;
            if ( i != g / i )
                cnt++;
        }
    }
    cout << cnt;
    return 0;
}
