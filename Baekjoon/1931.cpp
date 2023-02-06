#include <bits/stdc++.h>
using namespace std;
int s,e,n,ret=1;

bool cmp(pair<int,int> &a, pair<int,int> &b){
	if(a.second == b.second) return a.first < b.first;
	return a.second < b.second;
}

int main(){
	cin >> n;
	vector<pair<int,int>>v;
	
	for(int i = 0; i < n; i++){
		cin >> s >> e;
		v.push_back({s,e});
	}
	
	sort(v.begin(), v.end(), cmp);
	
	s = v[0].first;
	e = v[0].second;
	
	for(int i = 1; i < n; i++){
		if(v[i].first < e) continue;
		s = v[i].first;
		e = v[i].second;
		ret++;
	}
	cout << ret << '\n';
}
