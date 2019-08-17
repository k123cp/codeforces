#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n, last, cnt = 1;
    cin >> n;
    vector<int> b(n);
    for( int i = 0; i < n; i++ )
        cin >> b[i];
    sort(b.begin(), b.end());
    last = b[n-1] + 1;
    for( int i = n - 2; i >= 0; i-- )
    {
        if ( b[i] + 1 < last )
        {
            last = b[i] + 1;
            cnt++;
            continue;
        }
        if ( b[i] < last )
        {
            last = b[i];
            cnt++;
            continue;
        }
        if ( b[i] - 1 < last && b[i] - 1 > 0 )
        {
            last = b[i] - 1;
            cnt++;
            continue;
        }
    }
    cout << cnt;
    return 0;
}
