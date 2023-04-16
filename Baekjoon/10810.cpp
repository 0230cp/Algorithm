#include <bits/stdc++.h>
using namespace std;

int n,m;
int b,c,d;

void input(){
	cin >> n >> m;
}

void sol(){
	vector <int> a(n+1, 0);
	
	for(int i = 1; i <= m; i++){
		cin >> b >> c >> d;
		for(int j = b; j <= c; j++){
			a[j] = d;
		}
	}
	
	for(int i = 1; i <= n; i++){
		cout << a[i] << " ";
	}
}

int main(){
	input();
	sol();
}
