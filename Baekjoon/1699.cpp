#include <bits/stdc++.h>
using namespace std;

int n;

void input(){
	cin >> n;
}

void sol(int num){
	int dp[100004];
	
	for(int i = 1; i <= num; i++){
		dp[i] = i;
		for(int j = 1; j * j <= i; j++){
			dp[i] = min(dp[i], dp[i - j*j] + 1);
		}
	}
	cout << dp[num] << '\n';
}

int main(){
	input();
	sol(n);
}
