#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n,m,v,k,c;
vector<pair<ll,ll>>d;
vector<ll> b;
ll ret;

int main(){
	cin >> n >> k;
	
	for(int i = 0; i <n; i++){
		cin >> m >> v;
		d.push_back({m,v});
	}
	
	for(int i = 0; i < k; i++){
		cin >> c;
		b.push_back(c);
	}
	
	sort(d.begin(), d.end());
	sort(b.begin(), b.end());
	priority_queue<ll> pq;
	
	int j = 0;
	for(int i = 0; i < k; i++){
		while(j < n && d[j].first <= b[i]){
		pq.push(d[j].second);
		j++;
		}
	if(pq.size()){
			ret += pq.top();
			pq.pop();
		}
	}
	cout << ret << '\n';
}
