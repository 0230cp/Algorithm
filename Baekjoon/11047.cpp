#include<bits/stdc++.h>
using namespace std;

void sol(int n, int k){
	
	vector<int> coins(n);
	
	for(int i = 0; i < n; i++){
		cin >> coins[i]; 
	}
	
	int cnt = 0;
	for(int i = n - 1; i >= 0; i--){
		if(k >= coins[i]){
			cnt += k / coins[i];
			k %= coins[i];
		}
	}
	
	cout << cnt << '\n';
}

int main(){
	int n, k;
	cin >> n >> k;
	sol(n,k);
	return 0;
}
