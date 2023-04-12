#include <bits/stdc++.h>
using namespace std;

int n;

void input(){
	cin >> n;
}

void sol(int num){
	vector<int>a (num);
	vector<int>dp (num);
	int ret = 0;
	
	for(int i = 0; i < num; i++){
		cin >> a[i];
	}
	
	for(int i = 0; i < num; i++){
		dp[i] = 1;
		for(int j = 0; j < i; j++){
			if(a[i] < a[j]){
				dp[i] = max(dp[i], dp[j] + 1);
			}
		}
		ret = max(dp[i], ret);
	}
	cout << ret << '\n';
}

int main(){
	input();
	sol(n);
}
