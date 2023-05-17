#include<bits/stdc++.h>
using namespace std;

const int dy[4] = {1, 0, -1, 0};
const int dx[4] = {0, 1, 0, -1};

void bfs(int y, int x, vector<vector<char>> &grid, vector<vector<bool>> &visited){
	char color = grid[y][x];
	int n = grid.size();
	
	queue<pair<int,int>> q;
	q.push({y,x});
	visited[y][x] = true;	
	
	while(!q.empty()){
		int cy = q.front().first;
		int cx = q.front().second;
		q.pop();
		for(int i = 0; i < 4; i++){
			int ny = cy + dy[i];
			int nx = cx + dx[i];
			
			if(ny < 0 || nx < 0 || ny >= n || nx >= n) continue;
			if(!visited[ny][nx] && grid[ny][nx] == color){
				q.push({ny, nx});
				visited[ny][nx] = true;
			}
		}
	}
}

void sol(){
	int n;
	cin >> n;
	
	vector<vector<char>> grid(n, vector<char>(n));
	vector<vector<bool>> visited(n, vector<bool>(n, false));
	
	for(int i = 0; i <n; i++){
		for(int j = 0; j < n; j++){
			cin >> grid[i][j];
		}
	}
	
	int normalCnt = 0;
	int blindCnt = 0;
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(!visited[i][j]){
				bfs(i, j, grid, visited);
				normalCnt++;
			}
		}
	}
	
	visited.assign(n, vector<bool>(n,false));
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(grid[i][j] == 'R'){
				grid[i][j] = 'G';
			}
		}
	}
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(!visited[i][j]){
				bfs(i, j, grid, visited);
				blindCnt++;
			}
		}
	}
	
	cout << normalCnt << " " << blindCnt << '\n';
}


int main(){
	sol();
	return 0;
}

