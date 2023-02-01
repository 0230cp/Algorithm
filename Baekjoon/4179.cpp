#include <bits/stdc++.h>
using namespace std;
#define INF 2100000000

int n,m,y,x,ret;
int f[1004][1004];
int p[1004][1004];
char a[1004][1004];
int dy[4] = {-1, 0, 1, 0};
int dx[4] = {0,1,0,-1};

int main(){
	queue<pair<int,int>>q;
	int jy, jx;
	fill(&f[0][0], &f[0][0] + 1004*1004, INF);
	cin >> n >> m;
	
	for(int i = 0; i <n; i++){
		for(int j = 0; j <m; j++){
			cin >> a[i][j];
			if(a[i][j] == 'F') f[i][j] = 1, q.push({i,j});
			else if(a[i][j] == 'J'){
				 jy = i;
				  jx = j;
			}
		}
	}
	
	while(q.size()){
		tie(y,x) = q.front();
		q.pop();
		for(int i = 0; i < 4; i++){
			int ny = y + dy[i];
			int nx = x + dx[i];
			if(ny < 0 || ny >= n || nx < 0 || nx >= m) continue;
			if(f[ny][nx] != INF || a[ny][nx] == '#') continue;
			f[ny][nx] = f[y][x] + 1;
			q.push({ny,nx});
		}
	}
	
	p[jy][jx] = 1;
	q.push({jy,jx});
	while(q.size()){
		int y = q.front().first;
		int x = q.front().second;
		q.pop();
		
		if(x == m-1 || y == n-1 || y == 0 || x == 0){
			ret = p[y][x];
			break;
		}
		
		for(int i = 0; i <4; i++){
			int ny = y+ dy[i];
			int nx = x+ dx[i];
			if(ny < 0 || ny >= n || nx < 0 || nx >= m) continue;
			if(p[ny][nx] || a[ny][nx] == '#') continue;
			if(f[ny][nx] <= (p[y][x] + 1)) continue;
			p[ny][nx] = p[y][x] + 1;
			q.push({ny,nx});
		}
	}
	if(ret != 0) cout << ret << '\n';
	else cout << "IMPOSSIBLE" << '\n';
}
