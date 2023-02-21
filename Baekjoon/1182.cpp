#include <bits/stdc++.h>
using namespace std;

int n,s,ret;
int a[24];

void solve(int i, int sum){
	if(i == n){
		if(sum == s) ret++;
			return;
	}
	solve(i+1, sum);
	solve(i+1, sum + a[i]);
}

int main(){
	cin >> n >> s;
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	solve(0,0);
	if(s == 0) ret--;
	cout << ret << '\n';
}
