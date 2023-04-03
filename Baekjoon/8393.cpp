#include <bits/stdc++.h>
using namespace std;
int n;

void input(){
	cin >> n;
}

void sum(int n){
	int ret = 0;
	for(int i = 1; i <= n; i++){
		ret += i;
	}
	cout << ret <<'\n';
}

int main(){
	input();
	sum(n);
}
