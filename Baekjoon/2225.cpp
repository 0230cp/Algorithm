#include <iostream>
using namespace std;

const int MOD = 1000000000;

int dp[201][201]; // dp[i][j] : j를 i개의 정수로 나타내는 방법의 수

int main() {
    int n, k;
    cin >> n >> k;

    // 초기화
    for (int i = 0; i <= n; i++) {
        dp[1][i] = 1; // 1을 i개의 정수로 나타내는 방법은 모두 1개
        dp[2][i] = i + 1; // 2를 i개의 정수로 나타내는 방법은 i+1개
    }

    // dp 계산
    for (int i = 3; i <= k; i++) {
        for (int j = 0; j <= n; j++) {
            for (int l = 0; l <= j; l++) {
                dp[i][j] += dp[i-1][j-l];
                dp[i][j] %= MOD;
            }
        }
    }

    cout << dp[k][n] << endl;

    return 0;
}

