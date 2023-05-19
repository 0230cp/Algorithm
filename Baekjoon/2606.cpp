#include<bits/stdc++.h>
using namespace std;

int n,m;
const int dy[4] = {-1, 0, 1, 0};
const int dx[4] = {0, 1, 0, -1};

int main(){
	cin >> m >> n;
	
	vector<vector<int>> box(n, vector<int>(m));
	vector<vector<int>> check(n, vector<int>(m));
	queue<pair<int,int>> q;
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cin >> box[i][j];
			if(box[i][j] == 1){
				q.push({i,j});
				check[i][j] = 1;
			} else if(box[i][j] == -1){
				check[i][j] = -1;
			}
		}
	}
	
	while(!q.empty()){
		int cy = q.front().first;
		int cx = q.front().second;
		q.pop();
	
		for(int i = 0; i < 4; i++){
			int ny = cy + dy[i];
			int nx = cx + dx[i];
			
			if(ny < 0 || nx < 0 || ny >= n || nx >= m || check[ny][nx] != 0) continue;
			check[ny][nx] = check[cy][cx] + 1;
			q.push({ny,nx});
		}
	}
	
	int ret = 0;
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			if(check[i][j] == 0){
				cout << -1 << '\n';
				return 0;
			}
			ret = max(ret, check[i][j]);
		}
	}
	
	cout << ret - 1 << '\n';
	return 0;
}

