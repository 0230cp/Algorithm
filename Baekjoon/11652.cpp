#include <bits/stdc++.h>
using namespace std;


void sol(){
	int n;
	int cnt = 0;
	long long ret;
	int max = 0;
	
	cin >> n;
	vector<long long> v(n);
	for(int i = 0; i < n; i++){
		cin >> v[i];
	}	
	sort(v.begin(), v.end());
	
	ret = v[0];
	
	for(int i = 1; i < n; i++){
		if(v[i] == v[i-1]){
			cnt++;
			if(max < cnt){
				max = cnt;
				ret = v[i];
			}
		}else{
			cnt = 0;
		}
	}	
	cout << ret;
}

int main(){
	sol();
}
