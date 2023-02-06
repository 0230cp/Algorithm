#include<bits/stdc++.h>
using namespace std;

int n,s,e,sum,ret;
vector<pair<int,int>> v;

int main(){
	cin >> n;
	for(int i = 0; i <n; i++){
		cin >> s >> e;
		v.push_back({s,e});
	}
	
	sort(v.begin(), v.end());
	
	for(int i = 0; i < n; i++){
		if(i+1 < n && v[i].first + v[i].second > v[i+1].first){
			v[i+1].first = v[i].first + v[i].second;
		}
	}
	cout << v[n-1].first + v[n-1].second << '\n';
}
