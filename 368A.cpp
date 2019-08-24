#include <iostream>
#include <math.h>
#include <vector>

using namespace std;

int main()
{
    int a, n, m, cur = 0;
    int cnt[100001] = {0};
    bool isNew[100001];
    for( int i = 0; i < 100001; i++ ) isNew[i] = true;
    cin >> n >> m;
    vector<int> v(n);

    for( int i = 0; i < n; i++ ) cin >> v[i];
    for( int i = n - 1; i >= 0; i-- )
    {
        if ( isNew[v[i]] == true )
        {
            cur++;
            isNew[v[i]] = false;
        }
        cnt[i] += cur;
    }

    while ( m-- )
    {
        cin >> a;
        cout << cnt[a-1] << '\n';
    }
    return 0;
}
