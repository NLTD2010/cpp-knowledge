// Hello from td, cpp20
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define int long long

ll MAX=2e18, MIN=-2e18, MOD=1e9 + 7;

ll n, m, c;
vector<ll> hasha(60, 0);
vector<ll> hashb(60, 0);
string a, b;

int findind(char c) {
    if (c >= 'a' && c <= 'z') return c - 'a';
    return c - 'A' + 26;
}

signed main() {
    cin >> n >> m;
    cin.ignore();
    getline(cin, a);
    getline(cin, b);

    if (n > m) {
        cout << 0 << endl;
        return 0;
    }

    for(int i = 0; i < n; i++) hasha[findind(a[i])]++;
    for(int i = 0; i < n; i++) hashb[findind(b[i])]++;
    
    if(hasha == hashb) c++;

    for(int i = n; i < m; i++){
        hashb[findind(b[i])]++;
        hashb[findind(b[i - n])]--;
        if(hasha == hashb) c++;
    }
    cout << c;

}