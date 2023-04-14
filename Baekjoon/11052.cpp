#include <bits/stdc++.h>
using namespace std;

int n;

void input() {
    cin >> n;
}

void sol() {
    vector<int> card_pack(n + 1);
    vector<int> dp(n + 1, 0);

    for (int i = 1; i <= n; i++) {
        cin >> card_pack[i];
    }

    dp[1] = card_pack[1];

    for (int i = 2; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            dp[i] = max(dp[i], dp[i - j] + card_pack[j]);
        }
    }

    cout << dp[n] << '\n';
}

int main() {
    input();
    sol();
}

