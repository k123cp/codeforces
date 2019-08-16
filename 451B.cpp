#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> v;
int main()
{
    int n, a, L = -1, R = -1;
    bool flag = true;
    cin >> n;
    for( int i = 0; i < n; i++ )
    {
        cin >> a;
        v.push_back(a);
    }
    for( int i = 1; i < n; i++ )
        if ( v[i] < v[i-1] )
        {
            L = i - 1;
            break;
        }
    for( int i = n-1; i >= 0; i-- )
        if ( v[i] < v[i-1] )
        {
            R = i;
            break;
        }
    if ( L == -1 || R == -1 )
    {
        cout << "yes" << endl;
        cout << "1 1";
        return 0;
    }
    reverse(v.begin()+L, v.begin() + R + 1);
    for( int i = 1; i < n; i++ )
        if ( v[i] < v[i-1] )
        {
            flag = false;
            break;
        }
    if ( flag )
    {
        cout << "yes" << endl;
        cout << L+1 << " " << R+1;
    }
    else cout << "no" << endl;

    return 0;
}
