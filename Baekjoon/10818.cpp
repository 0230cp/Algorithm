#include <bits/stdc++.h>
using namespace std;

vector<int> input(){
	int n;
	int a;
	vector<int> v;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> a;
		v.push_back(a); 
	}
	return v;
}

void sol(vector<int> v){
	int min = 1000001;
	int max = -1000001;
	for(auto k : v){
		if(k < min) min = k;
		if(k > max) max = k;
	}
	cout << min << " " << max << '\n';
}

int main(){
	sol(input());
}
