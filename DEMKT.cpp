#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define int long long
#define vell vector<ll>
#define hashll unordered_map <ll,ll>
const ll MAX=2e18, MIN=-2e18, MOD=1e9 + 7;
const long double π=3.1415926535897932384626433;
string s;
signed main(){
    // freopen(".INP", "r", stdin);
    // freopen(".OUT", "w", stdout);
    getline(cin, s);
    ll c = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == '9'){
            c++;
        }
    }
    cout << c;
}
