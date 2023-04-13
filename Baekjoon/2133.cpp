#include <bits/stdc++.h>
using namespace std;

int n;

void input(){
	cin >> n;
}

void sol(){
	vector<int> dp (n+1);
	
	dp[0] = 1;
	dp[2] = 3;
	
	for(int i = 4; i <= n; i+=2){
		dp[i] = dp[i-2] * dp[2];
		for(int j = i - 4; j >= 0; j-=2){
			dp[i] += (dp[j] * 2);
		}	
	}
	cout << dp[n] << '\n';
}

int main(){
	input();
	sol();
}
