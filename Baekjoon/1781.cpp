#include <bits/stdc++.h>
using namespace std;

int n,p,c,ret;
vector<pair<int,int>> v;

int main(){
	cin >> n;
	
	for(int i = 0; i <n; i++){
		cin >> p >> c;
		v.push_back({p,c});
	}
	
	sort(v.begin(), v.end());
	
	priority_queue<int, vector<int>, greater<int>>pq;
	
	for(int i = 0; i < n; i++){
		pq.push(v[i].second);
		if(pq.size() > v[i].first){
			pq.pop();
		}
	}
	while(pq.size()){
		ret += pq.top();
		pq.pop();
	}
	cout << ret << '\n';
}
