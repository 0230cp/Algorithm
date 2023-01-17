#include <bits/stdc++.h>
using namespace std;

int t, n, m, b,ny,nx,y,x;
int a[54][54];
int visited[54][54];
const int dy[4] = {-1, 0, 1, 0};
const int dx[4] = {0, 1, 0, -1};

void dfs(int y, int x){
	visited[y][x] = 1;
	
	for(int i = 0; i < 4; i++){
		ny = y + dy[i];
		nx = x + dx[i];
		if(ny < 0 || nx < 0 || ny >= n || nx >= m)continue;
		if(visited[ny][nx] == 1) continue;
		if(a[ny][nx] == 0) continue;
		dfs(ny, nx);	
	}
	return;
}

int main(){
	int ret;
	cin >> t;
	
	while(t--){
		cin >> m;
		cin >> n;
		cin >> b;
		fill(&a[0][0], &a[0][0] + 54*54, 0);
		fill(&visited[0][0], &visited[0][0] + 54*54, 0);
		ret = 0;
		
		for(int i = 0; i < b; i++){
			cin >> x >> y;
			a[y][x] = 1;
		}
		
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			if(a[i][j] == 1 && !visited[i][j]){
				dfs(i,j);
				ret++;
			}
		}
	}
	
	cout << ret << '\n';
	}
	return 0;
}
