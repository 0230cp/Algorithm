#include <bits/stdc++.h>
using namespace std;

vector<int> v[10004];
bool visited[10004];
int n,m,a,b;
int res[10004];
int mx;

int dfs(int y){
	visited[y] = 1;
	int ret = 1;
	for(int a : v[y]){
		if(visited[a]) continue;
		ret += dfs(a); 
	}
	return ret;
}

int main(){
	mx = 0;
	cin >> n >> m;
	while(m--){
		cin >> a >>b;
		v[b].push_back(a);
	}
	for(int i = 1; i <=n; i++){
		memset(visited, 0, sizeof(visited));
		res[i] = dfs(i);
		mx = max(res[i], mx);
	}
	for(int i = 1; i <=n; i++){
		if(mx == res[i]) cout << i << " ";
	}
	return 0;
}
