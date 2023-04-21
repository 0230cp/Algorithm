#include <bits/stdc++.h>
using namespace std;

string s;
int arr[5004];
int dp[5004] = {0, };
int l;

void input(){
	cin >> s;
	l = s.length();	
	for(int i = 0; i < l; i++){
		arr[i+1] = s[i] - '0';
	}	
}

void sol(){
	
	if(l==1 && arr[1] == 0){
		cout << 0 << '\n';
		exit(0);
	}
	
	dp[0] = 1;
	
	for(int i = 1; i <= l; i++){
		if(arr[i] >= 1 && arr[i] <= 9) dp[i] = dp[i-1] % 1000000;
		if(i==1) continue;
		if(arr[i-1] * 10 + arr[i] >= 10 && arr[i-1] * 10 + arr[i] <= 26){
			dp[i] = (dp[i-2] + dp[i]) % 1000000;
		}
	}
	
	cout << dp[l] << '\n';
}

int main(){
	input();
	sol();
}
