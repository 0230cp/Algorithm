#include<bits/stdc++.h>
using namespace std;

int r,c,ma,ret;
pair<int,int> p;
queue<pair<int,int>> q;
int visited[30];
char a[30][30];
const int dy[4] = {-1,0,1,0};
const int dx[4] = {0,1,0,-1};


void solve(int y, int x, int cnt){
	ret = max(ret, cnt);
	for(int i = 0; i < 4; i++){
		int ny = y + dy[i];
		int nx = x + dx[i];
		if(ny< 0 || ny >= r || nx < 0 || nx >= c) continue;
		int next = (int)(a[ny][nx] - 'A');
		
		if(visited[next] == 0){
			visited[next] = 1;
			solve(ny,nx,cnt+1);
			visited[next] = 0;
		}
	}
}


int main(){
	cin >> r >> c;
	
	for(int i = 0; i < r; i++){
		for(int j = 0; j < c; j++){
			cin >> a[i][j];
		}
	}
	visited[(int)a[0][0] - 'A'] = 1;	
	solve(0,0,1);
	cout << ret << '\n';
}
