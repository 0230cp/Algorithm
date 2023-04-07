#include <bits/stdc++.h>
using namespace std;

int n;
int t;

void input(){
	cin >> n;
}

void inputTestCase(){
	cin >> t;
}

void sol(){
	int dp[11];
	dp[1] = 1;
	dp[2] = 2;
	dp[3] = 4;
	
	while(t--){
		input();
		for(int i = 4; i <= n; i++){
		dp[i] = dp[i-1] + dp[i-2] + dp[i-3];
		}
	cout << dp[n] << '\n';	
	}
}

int main(){
	inputTestCase();
	sol();
}
