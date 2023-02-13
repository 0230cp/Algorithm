#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
int n;

bool cmp(ll a, ll b){
	return a> b;
}
int main(){
	ll sum = 0;
	ll m; ll c;
	
	vector<ll> v;
	cin >> n;
	
	for(int i = 0; i < n; i++){
		cin >> c;
		v.push_back(c);
	}
	
	sort(v.begin(), v.end(), cmp);
	m = v[0];
	
	for(int i = 1; i < v.size(); i++){
		sum += v[i];
	}
	
	if(m >= sum) cout << m - sum << '\n';
	else{
		if(m % 2 == sum % 2) cout << 0 << '\n';
		else cout << 1 << '\n';
	}
	return 0;
}
