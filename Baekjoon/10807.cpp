#include <bits/stdc++.h>
using namespace std;

int n;

void input(){
	cin >> n;
}

void sol(){
	vector<int> a(104, 101);
	int ret = 0;
	int find;
	
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	cin >> find;
	
	for(int j : a){
		if(j == find) ret++;
	}
	
	cout << ret << '\n';
}

int main(){
	input();
	sol();
}
