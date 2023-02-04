#include<bits/stdc++.h>
using namespace std;

int a[104][104];
int s;
int n,m;

int main(){
	int ret = 0;
	cin >> s;
	
	while(s--){
		cin >> n >> m;
		for(int i = n; i < n+10; i++){
			for(int j = m; j < m+10; j++){
				a[i][j] = 1;
			}
		}
	}
	
	for(int i = 0; i < 104; i++){
		for(int j = 0; j < 104; j++){
			if(a[i][j] == 1) ret++;
		}
	}
	
	cout << ret << '\n';
}

