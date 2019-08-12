#include <iostream>
#include <algorithm>

using namespace std;

int n, a, b, c, DP[4001];

int cutting(int n)
{
    if ( n == 0 )
        return 0; //not possible to cut further
    if ( n < 0 )
        return -1000000000; //cannot cut into this length
    if ( DP[n] != -1 ) return DP[n]; //already calculated

    return DP[n] = 1 + max(cutting(n-a), max(cutting(n-b), cutting(n-c)));
}

int main()
{
    cin >> n >> a >> b >> c;
    for( int i = 0; i < 4001; i++ )
        DP[i] = -1;
    cout << cutting(n);
    return 0;
}
