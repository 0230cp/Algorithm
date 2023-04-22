#include<bits/stdc++.h>
using namespace std;

int n;
vector<int> a;

void input(){
	cin >> n;
	a.resize(n);
	for(int i =0; i < n; i++){
		cin >> a[i];
	}
}

void sol(){
	sort(a.begin(), a.end());
	for(int i = 0; i <n; i++){
		cout << a[i] << '\n';
	}
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	input();
	sol();
}
