#include <bits/stdc++.h>
using namespace std;

int input(){
	int n;
	cin >> n;
	return n;
}

void sol(int n){
	int dp[1004];
	dp[1] = 1;
	dp[2] = 3;
	for(int i = 3; i <= n; i++){
		dp[i] = dp[i-1] + dp[i-2]*2;
		dp[i] = dp[i] % 10007;
	}
	cout << dp[n] << '\n';
}

int main(){
	sol(input());
}
