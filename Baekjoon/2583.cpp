#include <bits/stdc++.h>
using namespace std;
int x,y,k,lx,ly,rx,ry,n,m; 
const int dy[4] = {-1, 0, 1, 0};
const int dx[4] = {0, 1, 0, -1};
int visited[104][104];
int arr[104][104];
vector<int> ret;

int dfs(int y, int x){
	visited[y][x] = 1;
	int ret = 1;
	for(int i = 0; i < 4; i++){
		int ny = y + dy[i];
		int nx = x + dx[i];
		if(ny < 0 || nx < 0 || ny >= m || nx >= n) continue;
		if(!visited[ny][nx] && !arr[ny][nx]) 
		ret += dfs(ny, nx);
	}
	return ret;
}


int main(){
	cin >> m >> n >> k;
	
	while(k--){
		cin >> lx >> ly >> rx >> ry;
	for(int i = lx; i < rx; i++){
		for(int j = ly; j < ry; j++){
			arr[j][i] = 1;
		}
	}
}
	
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			if(arr[i][j] != 1 && visited[i][j] ==0){
				ret.push_back(dfs(i,j));
			}
		}
	}
	
	sort(ret.begin(), ret.end());
	cout << ret.size() << '\n';
	for(int a : ret) cout << a << " ";
	return 0;
}
