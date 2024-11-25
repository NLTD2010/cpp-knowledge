#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define int long long

ll mulmod(ll a, ll b, ll mod) {
    ll res = 0;
    a = a % mod;
    while (b > 0) {
        if (b % 2 == 1) {
            res = (res + a) % mod;
        }
        a = (a * 2) % mod;
        b = b / 2;
    }
    return res % mod;
}

ll power_mod(ll a, ll b, ll mod) {
    ll res = 1;
    a = a % mod;
    while (b > 0) {
        if (b % 2 == 1) {
            res = mulmod(res, a, mod);
        }
        b = b >> 1;
        a = mulmod(a, a, mod);
    }
    return res;
}

ll n, a[500005], c = 0;

signed main() {
    cin >> n;
    for(int i = 1; i <= n; i++) cin >> a[i]; 
    
    
    for(int i = 1; i < n; i++) {
        for(int j = i + 1; j <= n; j++) {
            if (min(a[i], a[j]) == i && max(a[i], a[j]) == j) {
                c++;
            }
        }
    }
    
    cout << c;
}
