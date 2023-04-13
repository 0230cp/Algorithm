#include <bits/stdc++.h>
using namespace std;
int n;

void input(){
	cin >> n;	
}

void sol(int num){
	int stair[304];
	int dp[304];
	
	for(int i = 0; i < num; i++){
		cin >> stair[i];	
	}	
	
	dp[0] = stair[0];
	dp[1] = stair[0] + stair[1];
	
	for(int i = 2; i < num; i++){
		dp[i] = max(dp[i-2] + stair[i], dp[i-3] + stair[i-1] + stair[i]);
	}
	cout << dp[num-1] << '\n';
}

int main(){
	input();
	sol(n);

}
