#include <bits/stdc++.h>
using namespace std;

int n;
int a[304];
int dp[304];

void solve(){
	dp[1] = a[1];
	dp[2] = a[1] + a[2];
	dp[3] = max(a[1] + a[3], a[2] + a[3]);
	for(int i = 4; i <= n; i++){
		dp[i] = max(dp[i-2] + a[i] , dp[i-3] + a[i-1] + a[i]);
	}
	cout << dp[n] << '\n';
}

int main(){
	cin >> n;
	for(int i = 1; i <= n; i++){
		cin >> a[i];
	}
	solve();
}
