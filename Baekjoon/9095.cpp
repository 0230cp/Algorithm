#include <bits/stdc++.h>
using namespace std;

int a,n;
int dp[15];

void solve(int a){
	dp[1] = 1;
	dp[2] = 2;
	dp[3] = 4;
	for(int i =  4; i <= a; i++){
		dp[i] = dp[i-1] + dp[i-2] + dp[i-3];
	}
	cout << dp[a] << '\n';
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> n;
	while(n--){
		cin >> a;
		solve(a);
	}
}
