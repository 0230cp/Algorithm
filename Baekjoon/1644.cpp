#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
int n;
ll ret, sum;
vector<int> v;
int a[4000000];

void num(int n){
	for(int i = 2; i <= n; i++){
		a[i] = 1;
	}
	
	for(int i = 2; i <= n; i++){
		for(int j = 2; j*i <= n; j++){
			a[i*j] = 0;
		}
	}
	
	for(int i = 2; i <= n; i++){
		if(a[i] == 1) v.push_back(i);
	}
}

int main(){
	cin >> n;
	if(n==1) {
	cout << 0 <<'\n' ;
	return 0;
	}
	num(n);
	
	int lo = 0;
	int hi = 0;
	
	while(1){
		if(sum >= n) sum -= v[lo++];
		else if(hi > v.size()) break;
		else sum += v[hi++];
		if(sum == n) ret++;
	}
	
	cout << ret << '\n';
	
}
