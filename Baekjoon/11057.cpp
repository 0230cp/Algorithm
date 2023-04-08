#include <bits/stdc++.h>
using namespace std;

int n;

void input(){
	cin >> n;
}

void sol(int num){
	int dp[1004][10] = {0, };
	int ret = 0;
	
	for(int i = 0; i < 10; i++){
		dp[1][i] = 1;
	}
	
	for(int i = 2; i <= num; i++){
		for(int j = 0; j < 10; j++){
			for(int k = 0; k <= j; k++){
				dp[i][j] += (dp[i-1][k] % 10007);
			}		
		}
	}
	
	for(int i = 0; i < 10; i++){
		ret += (dp[num][i] % 10007);
	}
	cout << ret % 10007 << '\n';
}

int main(){
	input();
	sol(n);
}
