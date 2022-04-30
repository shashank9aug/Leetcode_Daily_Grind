class Solution {
public:
typedef long long ll;
    
void dfs(vector<vector<ll>>& v, ll i = 0, ll j = 0, int dir = 1) {
    ll m = v.size(), n = v[0].size();
    if (i < 0 || j < 0 || i >= m || j >= n || v[i][j]>0) return;
    v[i][j] = -1;
    if (dir == 1) dfs(v, i - 1, j, 1);
    if (dir == 2) dfs(v, i + 1, j, 2);
    if (dir == 3) dfs(v, i, j - 1, 3);
    if (dir == 4) dfs(v, i, j + 1, 4);
}

// -1gd 0uo 1 g 2 w
int countUnguarded(int m, int n, vector<vector<int>>& g, vector<vector<int>>& w) {
    vector<vector<ll>>v(m, vector<ll>(n, 0));
    for (const auto& it : g)
        v[it[0]][it[1]] = 1;
    for (const auto& it : w)
        v[it[0]][it[1]] = 2;
    for (ll i = 0;i < m;++i) {
        for (ll j = 0;j < n;++j) {
            if (v[i][j] == 1) {
                dfs(v, i + 1, j, 2);
                dfs(v, i - 1, j, 1);
                dfs(v, i, j + 1, 4);
                dfs(v, i, j - 1, 3);
            }
        }
    }
    ll res = 0;
    for (ll i = 0;i < m;++i) {
        for (ll j = 0;j < n;++j) {
            if (v[i][j] == 0) {
                res++;
            }
        }
    }
    return res;
}

};