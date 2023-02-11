#include<bits/stdc++.h>
using namespace std;

int stats[21][21];
bool check[22];
int n;
int ret = 1000000000;

void solve(int x, int pos){
	if(x == n / 2){
		int start, link;
		start = 0;
		link = 0;
		
		for(int i = 1; i <= n; i++){
			for(int j = 1; j <= n; j++){
				if(check[i] && check[j]) start += stats[i][j];
				if(!check[i] && !check[j]) link += stats[i][j];
			}
		}
	int temp = abs(start - link);
	ret = min(temp, ret);
	return;
	}
	
	for(int i = pos; i < n; i++){
		check[i] = true;
		solve(x+1, i+1);
		check[i] = false;
	}
	
}

int main(){
	cin >> n;
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n; j++){
			cin >> stats[i][j];
		}
	}
	solve(0,1);
	cout << ret << '\n';
}
