#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int a, n, m, prevSum = 0;
    vector<int> piles;
    piles.push_back(0);
    cin >> n;
    for( int i = 0; i < n; i++ )
    {
        cin >> a;
        prevSum += a;
        piles.push_back(prevSum);
    }
    cin >> m;
    for( int i = 0; i < m; i++ )
    {
        cin >> a;
        cout << lower_bound(piles.begin(), piles.end(), a) - piles.begin() << endl;
        //lower_bound faster than manually looping through piles
    }
    return 0;
}
