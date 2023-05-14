#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int> a, pair<int,int> b){
	if(a.second == b.second) return a.first < b.first;
	return a.second < b.second;
}

void sol(){
	int n;
	int ret = 0;
	map<int, int> mp;
	cin >> n;
	
	for(int i = 0; i < n; i++){
		cin >> mp[i];
	}
	
	vector<pair<int,int>> v(mp.begin(), mp.end());
	
	sort(v.begin(), v.end(), cmp);
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j <= i; j++){
			ret += v[j].second;
		}
	}
	
	cout << ret << '\n';
}

int main(){
	sol();
	return 0;
}
