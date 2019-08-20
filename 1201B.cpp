#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    long long sum = 0;
    cin >> n;
    vector<int> a(n);
    for( int i = 0; i < n; i++ )
    {
        cin >> a[i];
        sum += a[i];
    }
    sort(a.begin(), a.end());
    if ( sum % 2 == 0 && a[n-1] <= sum - a[n-1] )
        cout << "YES";
    else cout << "NO";
    return 0;
}
