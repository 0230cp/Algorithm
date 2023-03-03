#include <bits/stdc++.h>
using namespace std;

int n,k;
bool visited[100004]={0,};

void bfs(int n){
	queue<pair<int,int>> q;
	q.push({n,0});
	
	while(!q.empty()){
		int x = q.front().first;
		int cnt = q.front().second;
		q.pop();
		if(x == k){
			cout << cnt;
			break;
		}
		
		if(x+1 >= 0 && x+1 < 100001){
			if(!visited[x+1]){
				visited[x+1] = true;
				q.push({x+1, cnt + 1});
			}
		}
		if(x-1 >= 0 && x-1 < 100001){
			if(!visited[x-1]){
				visited[x-1] = true;
				q.push({x-1, cnt+1});
			}
		}
		if(x*2 >= 0 && x*2 < 100001){
			if(!visited[x*2]){
				visited[x*2] = true;
				q.push({x*2, cnt+1});
			}
		}
		
	}
}

int main(){
	cin >> n >> k;
	visited[n] = true;
	bfs(n);
}
