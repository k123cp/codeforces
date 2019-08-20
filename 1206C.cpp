#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    if ( n % 2 == 0 )
        cout << "NO";
    else
    {
        vector<int> r(2*n + 1);
        for( int i = 1; i <= n; i++ )
        {
            if ( i % 2 == 0 )
            {
                r[i+n] = 2*i - 1;
                r[i] = 2*i;
            }
            else
            {
                r[i+n] = 2*i;
                r[i] = 2*i - 1;
            }
        }
        cout << "YES" << endl;
        for( int i = 1; i <= 2*n; i++ )
            cout << r[i] << " ";
    }
    return 0;
}
