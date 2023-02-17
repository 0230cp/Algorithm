#include<bits/stdc++.h>
using namespace std;

int dp[100004];
int n,ret;
int a[100004];

int main(){
	ret = -1e9;
	cin >> n;
	
	for(int i = 1; i <= n; i++){
		 cin >> a[i];
	}
	dp[0] = a[0];
	
	for(int i = 1; i <= n; i++){
		dp[i] = max(a[i], dp[i-1] + a[i]);
		ret = max(dp[i], ret);
	}
	cout << ret << '\n';
}
