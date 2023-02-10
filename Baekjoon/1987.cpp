#include <bits/stdc++.h>
using namespace std;

int k;
int a[14];
vector<int> ret[1030];

void solve(int s, int e, int level){
	if(s > e) return;
	if(s == e){
		ret[level].push_back(a[s]);
		return;
	}
	
	int mid = (s+e)/2;
	ret[level].push_back(a[mid]);
	solve(s,mid-1,level+1);
	solve(mid+1,e,level+1);
	return;
}

int main(){
	cin >> k;
	int end = (int)pow(2,k) - 1;
	for(int i = 0; i < end; i++){
		cin >> a[i];
	}
	
	solve(0, end, 1);
	
	for(int i = 1; i <= k; i++){
		for(int j : ret[i]){
			cout << j << ' ';
		}
		cout << '\n';
	}
}
