#include <iostream>
using namespace std;

int n,k;
const int MOD = 1000000000;

int dp[201][201]; // dp[i][j] : j를 i개의 정수로 나타내는 방법의 수

void input(){
	cin >> n >> k;
}

void sol(){
	for(int i = 0; i <= k; i++){
		dp[1][i] = i;
	}
	
	for(int i = 1; i <= n; i++){
		dp[i][1] = 1;
	}
	
	for(int i = 2; i <= n; i++){
		for(int j = 2; j <= k; j++){
			dp[i][j] = (dp[i][j-1] + dp[i-1][j]) % MOD;
		}
	}
	cout << dp[n][k] << '\n';
}
int main() {
    input();
    sol();
}

