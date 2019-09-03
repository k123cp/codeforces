#include <bits/stdc++.h>

using namespace std;

typedef pair<int, int> pii;
typedef long long ll;
#define MOD 1000000007

int main()
{
    //freopen("input.txt", "r", stdin);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m, k;
    cin >> n >> m >> k;

    vector<pii> a(n); //second int to preserve position
    for(int i = 0; i < n; ++i) {
        cin >> a[i].first;
        a[i].second = i;
    }

    sort(a.begin(), a.end(), greater<pii>());

    vector<int> ind(m*k);
    ll sumBeauty = 0;
    for(int i = 0; i < m*k; ++i) {
        sumBeauty += a[i].first;
        ind[i] = a[i].second;
    } //ind - position of the m*k largest elements

    sort(ind.begin(), ind.end());

    vector<int> division(k-1);
    for(int i = 0; i < k-1; ++i)
        division[i] = ind[(i+1)*m - 1];

    cout << sumBeauty << endl;
    for(int p: division)
        cout << p + 1 << " ";

    return 0;
}
