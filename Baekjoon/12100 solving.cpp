#include <bits/stdc++.h>
using namespace std;

int n,ret;
int a[24][24];
const int dy[4] = {0,-1,0,1};
const int dx[4] = {1,0,-1,0};
bool visited[4];
vector<int> v;

void solve(int cnt, int pos){
	int y,x,ny,nx;
	
	for(int i = pos; i < 4; i++){
		visited[i] = true;
		solve[cnt+1, i+1];
		visited[i] = false;
	}
	
	if(cnt == 5){
		for(int k : v)
		if(visited[0]){
			for(int j = n-1; j >= 0; j--){
				for(int i = 0; i < n; i++){
					if(a[i][j] != 0){
						y = i;
						x = j;
						ny = y + dy[visited[0]];
						nx = x + dx[visited[0]];
						if(a[ny][nx] == a[y][x]){
							a[ny][nx] = a[ny][nx] * 2;
							a[y][x] = 0;
						}
						if(nx >= n || a[ny][nx] != 0)continue;
						a[ny][nx] = a[y][x];
						a[y][x] = 0;
					}
				}
			}
		}
		if(visited[1]){
			for(int i = 0; i < n; i++){
				for(int j = 0; j < n; j++){
					if(a[i][j] != 0){
						y = i;
						x = j;
						ny = y + dy[visited[1]];
						nx = x + dx[visited[1]];
						if(a[ny][nx] == a[y][x]){
							a[ny][nx] = a[ny][nx] * 2;
							a[y][x] = 0;
						}
						if(ny < 0 || a[ny][nx] != 0) continue;
						a[ny][nx] = a[y][x];
						a[y][x] = 0;
					}
				}
			}
		}
		if(visited[2]){
			for(int j = 0; j < n; j++){
				for(int i = 0; i < n; i++){
					if(a[i][j] != 0){
						y = i;
						x = j;
						ny = y + dy[visited[2]];
						nx = x + dx[visited[2]];
						if(a[ny][nx] == a[y][x]){
							a[ny][nx] = a[ny][nx] * 2;
							a[y][x] = 0;
						}
						if(nx < 0 || a[ny][nx] != 0)continue;
						a[ny][nx] = a[y][x];
						a[y][x] = 0;
					}
				}
			}
		}
		if(visited[3]){
			for(int i = n-1; i >= 0; i--){
				for(int j = 0; j < n; j++){
					y = i;
					x = j;
					ny = y + dy[visited[3]];
					nx = x + dx[visited[3]];
					if(a[ny][nx] == a[y][x]){
						a[ny][nx] = a[ny][nx] * 2;
						a[y][x] = 0;
					}
					if(ny < 0 || a[ny][nx]!= 0) continue;
					a[ny][nx] = a[y][x];
					a[y][x] = 0;
				}
			}
		}
		for(int i = 0; i <n; i++){
			for(int j = 0; j < n; j++){
				ret = max(a[i][j], ret);
			}
		}
	}
	cout << ret << '\n';
	return;
}

int main(){
	cin >> n;
	for(int i = 0; i <n; i++){
		for(int j = 0; j < n; j++){
			cin >> a[i][j];
		}
	}
	solve(1,0);
}
