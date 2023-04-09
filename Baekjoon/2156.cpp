#include <bits/stdc++.h>
using namespace std;

int n;

void input(){
	cin >> n;
}

void sol(int n){
	int dp[10004];
	int grape[10004];
	
	for(int i = 0; i < n; i++){
		cin >> grape[i];
	}
	dp[0] = grape[0];
	dp[1] = grape[0] + grape[1];
	dp[2] = max({grape[0] + grape[1], grape[0] + grape[2], grape[1] + grape[2]});
	
	for(int i = 2; i < n; i++){
		dp[i] = max({dp[i-1], dp[i-2] + grape[i], dp[i-3] + grape[i-1] + grape[i]});
	}	
	
	cout << dp[n-1] << '\n';
}

int main(){
	input();
	sol(n);
}
