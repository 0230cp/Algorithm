#include<bits/stdc++.h>
using namespace std;

int n;
vector <pair<int,string>> a;

void input(){
	cin >> n;
	a.resize(n);
	for(int i =0; i < n; i++){
		cin >> a[i].first >> a[i].second;
	}
}

bool cmp(pair<int,string> a, pair<int,string> b){
	return a.first < b.first;
}

void sol(){
	stable_sort(a.begin(), a.end(),cmp);
	for(int i = 0; i <n; i++){
		cout << a[i].first << " " << a[i].second << '\n';
	}
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	input();
	sol();
}
