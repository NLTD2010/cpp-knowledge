#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define int long long
#define vell vector<ll>
#define hashll unordered_map <ll,ll>
const ll MAX=2e18, MIN=-2e18, MOD=1e9 + 7;
const long double π=3.1415926535897932384626433;
ll n, c;
bool a[10000007];
void lmao(ll n){
    fill(a, a + n + 1, true);
    a[0] = a[1] = false;
    for(int i = 2; i * i <= n; i ++){
        if(a[i]){
            for(int j = i * i; j <= n; j += i){
                a[j] = false;
            }
        }
    }
}
signed main(){
    freopen("GOL.INP", "r", stdin);
    freopen("GOL.OUT", "w", stdout);
    
    cin >> n;
    lmao(n);
    for(int i = 4; i * 2 <= n; i++){
        if(a[i] && a[n - i]) c += 1;
    }
    cout << c;
}
