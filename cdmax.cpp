#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef vector<ll> vll;
typedef vector<int> vi;

#define rep(i, a, b) for (ll i = a; i < b; i++)
#define repi(i, a, b) for (ll i = a; i <= b; i++)
#define repn(i, a, b) for (ll i = a; i >= b; i--)
#define fast()                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
// solve() function
void solve()
{
    ll n;
    cin >> n;
    vll v(n);
    rep(i, 0, n)
            cin >>
        v[i];
    sort(all(v));
    ll x = v[0], y = v[1], z = v[n - 1];
    ll ans = abs(x - y) + abs(y - z) + abs(z - x);
    cout << ans << endl;
}
// driver function
int main()
{
    fast();
    ll t = 1;
    cin >> t;
    rep(i, 0, t)
    {
        solve();
    }
    return 0;
}
