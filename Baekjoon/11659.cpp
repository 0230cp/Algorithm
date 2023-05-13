#include<bits/stdc++.h>
using namespace std;

void sol(int a[], int n, int m){
	int sum[n+1] = {0, };
	
	for(int i = 1; i <= n; i++){
		sum[i] = sum[i-1] + a[i-1];
	}
	
	for(int i = 0; i < m; i++){
		int start, end;
		cin >> start >> end;
		int ret = sum[end] - sum[start-1];
		cout << ret << '\n';
	}
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n, m;
	
	cin >>  n >> m;
	
	int a[n];
	
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	
	sol(a, n, m);
	
	return 0;
}
