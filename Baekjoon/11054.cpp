#include <bits/stdc++.h>
using namespace std;

int n;

void input(){
	cin >> n;
}

void sol(int num){
	vector<int>a (num);
	vector<vector<int>> dp(num, vector<int>(2));
	int ret = 0;
	
	for(int i = 0; i < num; i++){
		cin >> a[i];
	}
	
	for(int i = 0; i < num; i++){
		dp[i][0] = 1;
		for(int j = 0; j < i; j++){
			if(a[i] > a[j]){
				dp[i][0] = max(dp[i][0], dp[j][0] + 1);
			}
		}
	}
		
	for(int i = num - 1; i >= 0; i--){
		dp[i][1] = 1;
		for(int j = num - 1; j > i; j--){
			if(a[i] > a[j]){
				dp[i][1] = max(dp[i][1], dp[j][1] + 1);
			}
		}
	}
	
	for(int i = 0; i < num; i++){
		ret = max(ret , dp[i][0] + dp[i][1] - 1);
	}
	cout << ret << '\n';
}

int main(){
	input();
	sol(n);
}
