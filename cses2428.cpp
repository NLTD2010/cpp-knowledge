#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define int long long
#define vell vector<ll>
#define hashll unordered_map <ll,ll>
const ll MAX=2e18, MIN=-2e18, MOD=1e9 + 7;
ll t, n;

signed main(){
    freopen("SUMROOK.INP", "r", stdin);
    freopen("SUMROOK.OUT", "w", stdout);
    cin >> t;
    for(int i = 0; i < t; i++){
        cin >> n;
        vector<vector<ll>>  a(n, vector<ll>(n, 0));
        vector<vector<ll>> dp(n, vector<ll>(n, MIN));

        for(int i = 0; i < n; i++) for(int j = 0; j < n; j++) cin >> a[i][j];

        for(int i = 0; i < n; i++) dp[0][i] = a[0][i];
        for(int i = 1; i < n; i++){
            for(int j = 0; j < n; j++){
                for(int k = 0; k < n; k++){
                    if(j != k){
                        dp[i][j] = max(dp[i][j], dp[i - 1][k] + a[i][j]);
                    }
                }
            }
        }
        ll res = MIN;
        for(int i = 0; i < n; i++){
            res = max(res, dp[n - 1][i]);
        }
        cout << res << endl;
    }
}
