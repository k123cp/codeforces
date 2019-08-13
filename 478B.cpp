#include <iostream>

using namespace std;

int main()
{
    long long p, t, lowest = 0, highest, uniformTeams, unicorn;
    cin >> p >> t;
    if ( t == 1 )
    {
        cout << p * ( p - 1 ) / 2 << " " << p * ( p - 1 ) / 2;
        return 0;
    }
    else
    {
        highest = (p - t + 1)*(p - t)/2;
        lowest = ((p/t)*(p/t - 1) / 2) * (t - p%t) + ((p/t + 1)*(p/t)/2)*(p % t);
        cout << lowest << " " << highest;
    }
    //n = (p % t)*(p/t + 1) + (t - p%t)*(p/t)
    //there are p % t leftover players after dividing them evenly (p/t) between teams
    //so there are p % t teams with p/t + 1 players
    //the rest ( t - p%t ) have p/t players
    return 0;
}
