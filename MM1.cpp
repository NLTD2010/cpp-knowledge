#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define int long long
ll MAX=2e18, MIN=-2e18, MOD=1e9 + 7;
string s;
set<ll> sus;
signed main(){
    freopen("MM.INP", "r", stdin);
    freopen("MM.OUT", "w", stdout);
    getline(cin, s);
    for(int unsigned i = 0; i < s.size(); i++){
        if('0' <= s[i] && s[i] <= '9'){
            string k;
            while(i  < s.size() && '0' <= s[i] && s[i] <= '9'){
                k += s[i];
                i++;
            }
            sus.insert(stoll(k));
        }
    }
    cout << sus.size();
}
