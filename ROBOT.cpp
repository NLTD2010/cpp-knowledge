#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define int long long
#define vell vector<ll>
#define hashll unordered_map <ll,ll>
const ll MAX=2e18, MIN=-2e18, MOD=1e9 + 7;
const long double π=acos(-1);
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
ll n;
bool prime(ll n) {
    if (n < 2) return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false;
    }
    return true;
}signed main(){
    faster;
    vector<ll> x;
    for(int i = 2; i < n; i++){
        if(prime(i)) x.push_back(i);
    } 

    
}