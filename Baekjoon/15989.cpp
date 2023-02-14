#include <bits/stdc++.h>
using namespace std;

int n,t,ret;
int dp[10004][3];

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> t;
	
	while(t--){
		ret = 0;
		
		cin >> n;
	
		dp[1][1] = 1;
		dp[2][1] = 1, dp[2][2] = 1, dp[3][1] = 1, dp[3][2] = 1, dp[3][3] = 1;
	
		for(int i = 4; i <= 10000; i++){
			dp[i][1] = dp[i-3][1];
			dp[i][2] = dp[i-2][1] + dp[i-2][2];
			dp[i][3] = dp[i-3][1] + dp[i-3][2] + dp[i-3][3];
		}
	
		for(int i = 1; i <= 3; i++){
			ret += dp[n][i];
	}	
	
		cout << ret << '\n';
	}
}
