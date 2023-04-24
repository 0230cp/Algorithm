#include<bits/stdc++.h>
using namespace std;

int n, m, k;
int a[104][104];
int b[104][104];
int c[104][104];

void input(){
	cin >> n >> m;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cin >> a[i][j];
		}
	}
	
	cin >> m >> k;
	for(int i = 0; i < m; i++){
		for(int j = 0; j < k; j++){
			cin >> b[i][j];
		}
	}
}

void sol(){
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < k; j++){
			for(int o = 0; o < m; o++){
				c[i][j] += a[i][o] * b[o][j];
			}	
		}
	}
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < k; j++){
			cout << c[i][j] << ' ';
		}
		cout << '\n';
	}
}

int main(){
	input();
	sol();
}
