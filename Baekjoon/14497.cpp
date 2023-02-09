#include <bits/stdc++.h>
using namespace std;

int n,m,x1,x2,yf,y2,ret;
pair<int,int> b;
char a[304][304];
int visited[304][304];
const int dy[4] = {-1,0,1,0};
const int dx[4] = {0,1,0,-1};
queue<pair<int,int>> tq;

void solve(int y, int x){
	queue<pair<int,int>> q;
	visited[y][x] = 1;
	q.push({y,x});
	
	while(a[y2][x2] != '0'){
		ret++;
		
		while(q.size()){
		b = q.front();
		q.pop();
		for(int i = 0; i < 4; i++){
			int ny = b.first + dy[i];
			int nx = b.second + dx[i];
			if(ny < 1 || ny > n || nx < 1 || nx > m || visited[ny][nx]) continue;
			visited[ny][nx] = ret;
			if(a[ny][nx] != '0'){
				a[ny][nx] = '0';
				tq.push({ny,nx});
			}else q.push({ny,nx});
		}
	}
	q = tq;
}
	cout << visited[y2][x2] << '\n';	
}

int main(){
	cin >> n >> m;
	cin >> yf >> x1 >> y2 >> x2;
	
	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= m; j++){
			cin >> a[i][j];
		}
	}
	solve(yf, x1);
	return 0;
}
