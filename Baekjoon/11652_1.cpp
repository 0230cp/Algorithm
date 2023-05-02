#include <bits/stdc++.h>
using namespace std;

void sol(){
	int n;
	long long ret;
	cin >> n;
	
	map<long long, int> m;
	
	long long num;
	for(int i = 0; i < n; i++){
		cin >> num;
		m[num]++;
	}
	
	int max = 0;
	
	for(auto it = m.begin(); it != m.end(); it++){
		if(it -> second > max){
			max = it -> second;
			ret = it->first;
		} else if(it -> second == max && it -> first < ret){
			ret = it -> first;
		}
	}
	cout << ret;
}

int main(){
	sol();
	return 0;
}
