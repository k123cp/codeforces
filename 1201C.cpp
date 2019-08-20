#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<long long> arr;
long long n, k;
bool check(long long x) //check if x is a possible median val
{
    long long moves = 0;
    for( int i = n/2; i < n; i++ ) //for x to be median all elements after x
    {                              //must be equal or larger than x
        if ( x - arr[i] > 0 ) moves += x - arr[i];
        if ( moves > k ) return false;
    }
    if ( moves <= k ) return true;
    return false;
}

int main()
{
    cin >> n >> k;
    int a;
    for( long long i = 0; i < n; i++ )
    {
        cin >> a;
        arr.push_back(a);
    }
    sort(arr.begin(), arr.end());
    long long small = 1, big = 20000000000;
    while ( small != big ) //Binary search for possible largest median val
    {
        long long mid = (small + big + 1) / 2;
        if ( check(mid) )
            small = mid;
        else big = mid - 1;
    }
    cout << small;
    return 0;
}
