#include <bits/stdc++.h>
using namespace std;

int n;
int a[504][504];
int dp[504][504];
int ret = -1;

void triangle(int n){
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= i; j++){
			cin >> a[i][j]; 
		}
	}
}

void solve(int n){
	dp[1][1] = a[1][1];
	if(n == 1) ret = max(ret, dp[1][1]);
	else{
		for(int i = 2; i <= n; i++){
			for(int j = 1; j <= i; j++){
				if(j == 1) dp[i][j] = dp[i-1][1] + a[i][1];
				else if(j == i) dp[i][j] = dp[i-1][j-1] + a[i][j];
				else{
					dp[i][j] = max(dp[i-1][j-1] + a[i][j], dp[i-1][j] + a[i][j]);
				}			
				ret = max(ret, dp[i][j]);
			}
		}
	}
	cout << ret << '\n';
}

int main(){
	cin >> n;
	triangle(n);
	solve(n);
