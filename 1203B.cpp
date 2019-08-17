#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int q, n, a;
    cin >> q;
    bool flag = true;
    while( q-- )
    {
        cin >> n;
        vector<int> sticks(4*n);
        for( int i = 1; i <= 4*n; i++ )
            cin >> sticks[i];
        sort(sticks.begin(), sticks.end());
        int area = sticks[0] * sticks[4*n-1];
        bool flag = true;
        for( int i = 1; i <= n; i++ )
        {
            if ( sticks[2*i -1] != sticks[2*i] ) //check if there are 2 sticks
            {                                    //with same length
                flag = false;
                break;
            }
            if ( sticks[4*n - 2*i + 1] != sticks[4*n - 2*i +2] )
            {                   //same (so that a rectangle can be formed
                flag = false;
                break;
            }
            if ( sticks[2*i - 1] * sticks[4*n - 2*i + 2] == area )
            {
                flag = false;
                break;
            }
        }
        if ( flag ) cout << "YES" << endl;
        else cout << "NO" << endl;
        sticks.clear();
    }
    return 0;
}
