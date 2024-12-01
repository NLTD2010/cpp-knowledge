#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define int long long
ll MAX=2e18, MIN=-2e18, MOD=1e9 + 7;
ll t, n;
signed main(){
    freopen("TG.INP", "r", stdin);
    freopen("TG.OUT", "w", stdout);
    cin >> t;
    for(int i = 0; i < t; i++){
        cin >> n;
        ll min = n % 60;
        ll hour = 8 + n / 60;
        if(hour < 10) cout << "0";
        cout << hour << ":";
        if(min < 10) cout << "0";
        cout << min << endl;
    }
}
