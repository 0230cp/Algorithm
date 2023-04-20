#include <iostream>
using namespace std;

const int MOD = 1000000000;

int dp[201][201]; // dp[i][j] : j�� i���� ������ ��Ÿ���� ����� ��

int main() {
    int n, k;
    cin >> n >> k;

    // �ʱ�ȭ
    for (int i = 0; i <= n; i++) {
        dp[1][i] = 1; // 1�� i���� ������ ��Ÿ���� ����� ��� 1��
        dp[2][i] = i + 1; // 2�� i���� ������ ��Ÿ���� ����� i+1��
    }

    // dp ���
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

