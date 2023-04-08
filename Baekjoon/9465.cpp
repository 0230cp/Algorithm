#include <bits/stdc++.h>
using namespace std;

int t;
int n;

void testCaseInput(){
	cin >> t;
}

void input(){
	cin >> n;
}

void sol(int test){
	int dp[2][100004];
	int stiker[2][100004];
	
	while(test--){
		input();
	
		for(int i = 0; i < 2; i++){
			for(int j = 1; j <= n; j++){
				cin >> stiker[i][j];
			}
		}
		
		dp[0][1] = stiker[0][1];
		dp[1][1] = stiker[1][1];
		
		for(int i = 2; i <= n; i++){
			dp[0][i] = max(dp[1][i-1], dp[1][i-2]) + stiker[0][i];
			dp[1][i] = max(dp[0][i-1], dp[0][i-2]) + stiker[1][i];
		}
		
		cout << max(dp[0][n], dp[1][n]) << '\n';
	}	
	
}

int main(){
	testCaseInput();
	sol(t);
}
