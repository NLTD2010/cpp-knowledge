#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#define int long long
using namespace std;

struct Ninja {
    int b, c, e;
};

signed main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL); 
    int n, m;
    cin >> n >> m;

    vector<Ninja> a(n);
    vector<vector<int>> ch(n);

    for (int i = 0; i < n; ++i) {
        cin >> a[i].b >> a[i].c >> a[i].e;
        a[i].b--;
        if (a[i].b >= 0) {
            ch[a[i].b].push_back(i);
        }
    }

    vector<int> dp(m + 1, 0); 

    function<void(int)> dfs = [&](int u) {
        vector<int> cur_dp = dp; 

        for (int v : ch[u]) {
            dfs(v);

            for (int cost = m; cost >= 0; --cost) {
                for (int add_cost = 0; add_cost + cost <= m; ++add_cost) {
                    dp[cost + add_cost] = max(dp[cost + add_cost], cur_dp[cost] + dp[add_cost]);
                }
            }
        }
        for (int cost = m; cost >= a[u].c; --cost) {
            dp[cost] = max(dp[cost], dp[cost - a[u].c] + 1);
        }
    };

    dfs(0);

    int ans = 0;
    for (int cost = 0; cost <= m; ++cost) {
        for (int u = 0; u < n; ++u) {
            ans = max(ans, dp[cost] * a[u].e);
        }
    }

    cout << ans << endl;

    return 0;
}
//gpt full!