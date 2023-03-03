#include <bits/stdc++.h>
using namespace std;

int n;
int dp[1004];

void solve(int a){
	dp[1] = 1;
	dp[2] = 2;
	for(int i = 3; i <= a; i++){
		dp[i] = dp[i-2] + dp[i-1];
		dp[i] %= 10007;
	}	
	cout << dp[a] << '\n';
}

int main(){
	cin >> n;
	solve(n);
}
