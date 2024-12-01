#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define int long long
ll n, t;
signed main(){
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> t;
        ll m = t  % 60;
        ll h = 8 + t/60;
        if(h < 10) cout << 0;
        cout << h << ":";
        if(m < 10) cout << 0;
        cout << m << endl;
    }
}