#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define int long long
#define vell vector<ll>
#define hashll unordered_map <ll,ll>
const ll MAX=2e18, MIN=-2e18, MOD=1e9 + 7;
const long double π=3.1415926535897932384626433;
ll n;
vector<ll> a;
signed main(){
    // freopen(".INP", "r", stdin);
    // freopen(".OUT", "w", stdout);
    for(ll i = 1; i <= 9; i++){
        ll k = i;
        for(ll j = 1; j <= 16; j++){
            a.push_back(k);
            k = k * 10 + i;
        }
    }
    sort(a.begin(), a.end());
    cin >> n;
    cout << *upper_bound(a.begin(), a.end(), n) - n;
}
