#include <bits/stdc++.h>
using namespace std;

int n, m,num,cnt;
vector<int> v;
int ret[10] = {0, };
bool visited[10] = {0, };

void solve(int cnt){
	if(cnt == m){
		for(int i = 0; i < m; i++){
			cout << ret[i] << ' ';
		}
		cout << '\n';
		return;
	}
	
	for(int i = 0; i < v.size(); i++){
		if(!visited[i]){
			visited[i] = true;
			ret[cnt] = v[i];
			solve(cnt + 1);
			visited[i] = false;
		}
	}
}

int main(){
	cin >> n >> m;

	for(int i = 0; i < n; i++){
		cin >> num;
		v.push_back(num);
	}
	
	sort(v.begin(), v.end());
	
	solve(0);	
}
