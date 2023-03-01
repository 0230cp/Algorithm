#include<bits/stdc++.h>
using namespace std;

int n,m;
int a[10];
bool visited[10];

int choice(int cnt){
	if(cnt == m){
		for(int i = 0; i < m; i++){
			cout << a[i] << ' ';
		}
		cout << '\n';
	}
	
	for(int i = 1; i <= n; i++){
		if(!visited[i]){
			visited[i] = true;
			a[cnt] = i;
			choice(cnt + 1);
			visited[i] = false;
		}
	}
}

int main(){
	cin >> n >> m;
	choice(0);
}
