#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,t;

void testCase(){
	cin >> t;	
}

void input(){
	cin >> n;
}

void sol(){
	ll dp[101];
	
	dp[0] = 1;
	dp[1] = 1;
	dp[2] = 1;
	dp[3] = 2;
	dp[4] = 2;	
		
	while(t--){
		input();
		for(int i = 5; i < n; i++){
			dp[i] = dp[i-1] + dp[i-5];
		}	
		cout << dp[n-1] << '\n';
	}
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	testCase();
	sol();
}
