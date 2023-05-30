#include<bits/stdc++.h>
using namespace std;

#define input_max 1000 + 1

bool node[input_max][input_max];
bool check[input_max];
int n, m, ret;

void dfs(int num){
	check[num] = true;
	
	for(int i = 1; i <= n; i++){
		if(node[num][i] && !check[i]){
			dfs(i);
		}
	}
}

void sol(){
	cin >> n >> m;
	
	for(int i = 0; i < m; i++){
		int a,b;
		cin >> a >> b;
		node[a][b] = true;
		node[b][a] = true;
	}
	
	for(int i = 1; i <= n; i++){
		if(!check[i]){
			ret++;
			dfs(i);
		}
	}
	
	cout << ret << '\n';
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	sol();
	
	return 0;
}
