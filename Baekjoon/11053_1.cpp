#include <bits/stdc++.h>
using namespace std;

int n;

void input(){
	cin >> n;
}

void sol(int n){
	int a[1004];
	int dp[1004];
	int ret = 0;

	for(int i = 1; i <= n; i++){
		cin >> a[i];
	}
	for(int i = 1; i <= n; i++){
		dp[i] = 1;
		for(int j = 1; j < i; j++){
			if(a[i] > a[j]){
				dp[i] = max(dp[i], dp[j] +  1);
			}
		}
		ret = max(ret, dp[i]);
	} 
	cout << ret << '\n';
}

int main(){
	input();
	sol(n);
}
