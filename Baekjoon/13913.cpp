#include <bits/stdc++.h>
using namespace std;
#define prev a
const int MAX = 200004;
int visited[MAX];
int prev[MAX];
vector<int>v;
int ret;

int main(){
	int n, m;
	cin >> n >> m;
	
	visited[n] = 1;
	queue<int> q;
	q.push(n);
	
	while(q.size()){
		int now = q.front();
		q.pop();
		
		if(now == m){
			ret = visited[m];
		}
		
		for(int next : {now-1, now+1, now*2}){
			if(0 <= next && next < MAX && !visited[next]){
					q.push(next);
					visited[next] = visited[now] + 1;
					prev[next] = now;
			}
		}
	}
	for(int i = m; i != n; i = prev[i]){
		v.push_back(i);
	}
	v.push_back(n);
	
	cout << ret - 1 << '\n';
	reverse(v.begin(), v.end());
	for(int i : v) cout << i << ' ';
	return 0;
}


