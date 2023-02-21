#include <bits/stdc++.h>
using namespace std;

int n, x,y, m,a,b,ret,nq;
vector<pair<int,int>> v;
queue<int> q;
int visited[104];
bool flag;

void solve(int z){
	visited[z] = 1;
	q.push(z);
	while(!q.empty()){
		nq = q.front();
		q.pop();
		for(auto it : v){
				if(it.first == nq){
				if(visited[it.second]) continue;
				visited[it.second] = visited[nq] + 1;
				q.push(it.second);
				if(it.second == y){
				flag = 1;
				ret = visited[it.second] - 1;
				break;
				} 
			} 
		}
	}
	if(flag) cout << ret << '\n';
	else cout << -1 << '\n';
}

int main(){
	cin >> n >> x >> y >> m;
	for(int i = 0; i < m; i++){
		cin >> a >> b;
		v.push_back({a,b});
		v.push_back({b,a});
	}
	solve(x);
}
