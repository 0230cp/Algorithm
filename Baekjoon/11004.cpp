#include <bits/stdc++.h>
using namespace std;

bool cmp(int a, int b){
	return a < b;
}

void sol(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin >> n;
	
	int idx;
	cin >> idx;
	
	vector<long long> v(n);
	for(int i = 0; i < n; i++){
		cin >> v[i];
	}
	sort(v.begin(), v.end(), cmp);

	cout << v[idx-1];
}

int main(){
	sol();
}
