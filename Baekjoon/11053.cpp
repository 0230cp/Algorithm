#include <bits/stdc++.h>
using namespace std;

int n;
int a[1004];
int dp[1004];

int main(){
	cin >> n;
	
	for(int i = 0; i  < n; i++){
		cin >> a[i];
	}
	
	for(int i = 0; i < n; i++){
		dp[i] = 1;
		for(int j = 0; j < i; j++){
			if(a[i] > a[j]){
				dp[i] = max(dp[i],dp[j] +1);
			}
		}
	}
	
	int ret = 0;
	for(int i = 0; i < n; i++){
		ret = max(ret, dp[i]);
	}
	cout << ret << '\n';
}
