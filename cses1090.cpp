#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define int long long
#define vell vector<ll>
#define hashll unordered_map <ll,ll>
const ll MAX=2e18, MIN=-2e18, MOD=1e9 + 7;

ll n, x, a[200005], res;

hashll m;

signed main(){
    // freopen(".INP", "r", stdin);
    // freopen(".OUT", "w", stdout);
    
    cin >> n;
    for(int i = 0; i < n; i++) cin >> a[i];
    ll i = 0, currlen = 0;
    for(int j = 0; j < n; j++){
        if(m.find(a[j]) != m.end() && m[a[j]] >= i){
            i = m[a[j]] + 1;
        }
        m[a[j]] = j;
        currlen = j - i + 1;
        res = max(res, currlen);
    }
    cout << res;
}
