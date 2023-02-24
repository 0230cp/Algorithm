#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<int> v;

void solve(int start, int cnt) {
    if (cnt == m) {
        for (int i = 0; i < m; i++) {
            cout << v[i] << ' ';
        }
        cout << '\n';
        return;
    }
    for (int i = start; i <= n; i++) {
        v.push_back(i);
        solve(i, cnt + 1);
        v.pop_back();
    }
}

int main() {
    cin >> n >> m;
    solve(1, 0);
    return 0;
}
