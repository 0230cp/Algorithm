#include<bits/stdc++.h>
using namespace std;

int n, p, e, root;
vector<int> v[54];

int dfs(int y){
	int	ret = 0;
	int child = 0; 
	for(int a : v[y]){
		if(a == e) continue;
		ret += dfs(a);
		child++;
	}
	if(child == 0) return 1;
	return ret;
}

int main(){
	cin >> n;
	
	for(int i = 0; i <n; i++){
		cin >> p;
		if(p == -1) root = i; 
		else v[p].push_back(i);
	}
	
	cin >> e;
	
	if(e == root){
		cout << 0 << '\n';
		return 0;
	}
	
	cout << dfs(root) << '\n';
	return 0;
}
