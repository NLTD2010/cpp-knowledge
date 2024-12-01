#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define int long long
ll MAX=2e18, MIN=-2e18, MOD=1e9 + 7;
ll n, c = 0;

string s;
set<ll> sthlmaohere;
signed main(){
    getline(cin, s);
    for(int i = 0; i < s.size(); i ++){

        if('0' <= s[i] && s[i] <= '9'){
            string x = "";
            while('0' <= s[i] && s[i] <= '9' && i < s.size()){
                x += s[i];
                i++;
            }
            sthlmaohere.insert(stoll(x));
        }

    }
    cout << sthlmaohere.size();
}