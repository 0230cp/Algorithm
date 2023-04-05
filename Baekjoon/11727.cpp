#include <bits/stdc++.h>
using namespace std;

int input(){
	int n;
	cin >> n;
	return n;
}

void sol(int num){
	vector<int> dp(num+1);
	dp[0] = 1;
	dp[1] = 3;
	for(int i = 2; i < num; i++){
		dp[i] = (dp[i-1] + dp[i-2] * 2) % 10007;
	}
	cout << dp[num-1];
}

int main(){
	sol(input());
}
