#include <iostream>
#include <math.h>
#include <vector>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int l = s.length(), ab = -1, ba = -2;
    bool flag = false;
    for( int i = 0; i < l-1; i++ )
    {
        if ( s[i] == 'A' && s[i+1] == 'B' )
        {
            for( int j = i + 2; j < l-1; j++ )
                if ( s[j] == 'B' && s[j+1] == 'A' )
                {
                    flag = true; break;
                }
            if ( flag ) break;
        }

        if ( s[i] == 'B' && s[i+1] == 'A' )
        {
            for( int j = i + 2; j < l-1; j++ )
                if ( s[j] == 'A' && s[j+1] == 'B' )
                {
                    flag = true; break;
                }
            if ( flag ) break;
        }
    }
    if ( flag ) cout << "YES";
    else cout << "NO";
    return 0;
}
