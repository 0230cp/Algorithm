#include<bits/stdc++.h>
using namespace std;

void sol(){
	int n;
	int cnt = 0;
	
	cin >> n;
	
	for(int i = 5; i <= n; i *= 5){
		cnt += n / i;
	}
	
	cout << cnt << '\n';
}

int main(){
	sol();
	return 0;
}
