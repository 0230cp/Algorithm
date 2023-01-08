#include <bits/stdc++.h>
using namespace std;

int t, n;
string a, b;

int main(){
	cin >> t;
	
	while(t--){
		
		map <string, int> map1;
		cin >> n;
		
		for(int i =0; i < n; i++){
			cin >> a >> b;
			map1[b]++;
		}
		
		long long ret = 1;
		for(auto k : map1){
			ret *= ((long long) k.second+1);
		}
		
		ret--;
		cout << ret << '\n';
	}
	return 0;
}
