#include <bits/stdc++.h>
using namespace std;

int n;
int a[30][30];
bool visited[30][30] = {0, };
const int dy[4] = {-1,0,1,0};
const int dx[4] = {0,1,0,-1};
queue<pair<int,int>> q;
vector<int> v;
int ret;

void bfs(int y, int x){
	visited[y][x] = true;
	q.push({y,x});
	ret++;

	while(!q.empty()){
		int oy = q.front().first;
		int ox = q.front().second;
		q.pop();
		for(int i = 0; i < 4; i++){
			int ny = oy + dy[i];
			int nx = ox + dx[i];
		
			if(ny < 0 || ny >= n || nx < 0 || nx >= n || visited[ny][nx] || a[ny][nx] == 0) continue;
			visited[ny][nx]= true;
			q.push({ny,nx});
			ret++;
		}
	}
}

void solve(int n){
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			scanf("%1d", &a[i][j]);
		}
	}

	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(a[i][j] == 1 && visited[i][j] == false){
				ret = 0;
				bfs(i,j);
				v.push_back(ret);
			}
		}
	}
	
	sort(v.begin(), v.end());
	
	cout << v.size() << '\n';
	for(int a : v){
		cout << a << '\n';
	}
}

int main(){
	cin >> n;
	solve(n);	
}
