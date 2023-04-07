#include <bits/stdc++.h>
using namespace std;

int input(){
	int n;
	cin >> n;
	return n;
}

void sol(int n){
	long long dp[94];
	dp[1] = 1;
	dp[2] = 1;
	for(int i = 3; i <= n; i++){
		dp[i] = dp[i-1] + dp[i-2];
	}
	cout << dp[n] << '\n';
}

int main(){
	sol(input());
}
