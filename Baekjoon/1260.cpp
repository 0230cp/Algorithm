#include <bits/stdc++.h>
using namespace std;

int n,m,v,a,b;
vector<int>vv[10004];
bool visited[1004] = {0, };
const int dy[4] = {-1,0,1,0};
const int dx[4] = {0,1,0,-1};
queue<int> q;

void dfs(int num){
	visited[num] = 1;
	cout << num << " ";
	
	for(int i = 0; i < vv[num].size(); i++){
		if(!visited[vv[num][i]]){
			dfs(vv[num][i]);
			
		}
	}
	
}

void bfs(int num){
		q.push(num);
		visited[num] = 1;
		cout << num << " ";
		while(!q.empty()){
			num = q.front();
			q.pop();
			for(int i = 0; i < vv[num].size(); i++){
					if(!visited[vv[num][i]]){
					q.push(vv[num][i]);
					visited[vv[num][i]] = 1;
					cout << vv[num][i] << " ";
				}
			}
		}
}

int main(){
	cin >> n >> m >> v;
	
	for(int i = 0; i < m; i++){
		cin >> a >> b;
		vv[a].push_back(b);
		vv[b].push_back(a);
	}
	
	for(int i = 0; i <= n;i++){
        sort(vv[i].begin(), vv[i].end());
    }
    
	dfs(v);
	cout << '\n';
	

    for (int i = 0; i <= n; i++) {
        visited[i] = 0;
    }

	bfs(v);
}
