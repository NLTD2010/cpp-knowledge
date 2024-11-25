/*
Source for sieve: CodeForces: https://codeforces.com/blog/entry/7262?locale=en
           mod_pow: geeksforgeeks : https://www.geeksforgeeks.org/prime-factorization-using-sieve-olog-n-multiple-queries/
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll n, a[100005], dp[10000007], ans = 1;
bool v[10000000];

vector<int> spf(10000007);

void sieve() {
    for (int i = 2; i < 10000000; i += 2) spf[i] = 2;
	for (ll i = 3; i < 10000000; i += 2){
		if (!v[i]){
			
            spf[i] = i;

			for (ll j = i; (j*i) < 10000000; j += 2){
				if (!v[j*i]){
                    v[j*i] = true;
                    spf[j*i] = i;}
			}
		}
	}
}

ll mod_pow(ll x, ll y, ll p) 
{ 
    ll res = 1;    
 
    x = x % p; 
  
    if (x == 0) return 0; 
 
    while (y > 0) 
    { 
        if (y & 1) 
            res = (res*x) % p; 
 
        y = y>>1; 
        x = (x*x) % p; 
    } 
    return res; 
} 

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    sieve();
    cin >> n;
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++){       
        while(a[i] > 1){
            ll c = 0;
            ll res = spf[a[i]];
            while(a[i] % res == 0){
                a[i] /= res;
                c++;
            }
            dp[res] = max(dp[res], c);
        }


    }   
    for(int i = 2; i < 10000007; i ++){

        if(dp[i] > 0){
            if(dp[i] % 2 != 0){
                dp[i]++;
            }

            ans = (ans * mod_pow(i, dp[i], 1000000007)) % (1000000007);
        }
    }
    cout << ans << endl;
}