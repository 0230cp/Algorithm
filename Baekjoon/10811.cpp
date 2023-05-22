#include <bits/stdc++.h>
using namespace std;

void sol() {
    int n, m;
    int i, j;

    cin >> n >> m;
    vector<int> v(n);

    for (int i = 0; i < n; i++) {
        v[i] = i + 1;
    }

    while (m--) {
        cin >> i >> j;
        reverse(v.begin() + i - 1, v.begin() + j);
    }

    for (auto a : v) {
        cout << a << " ";
    }
}

int main() {
    sol();
    return 0;
}

