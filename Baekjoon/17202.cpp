#include<bits/stdc++.h>
using namespace std;

void sol(vector<int> v){
	if(v.size() == 2){
		cout << v[0] << v[1];
		return;
	}
	vector<int> v2;
	for(int i = 1; i < v.size(); i++){
		v2.push_back((v[i-1] + v[i]) % 10);
	}
	sol(v2);
}

int main(){
	vector<int> v;
	string a;
	string b;
	cin >> a >> b;
	
	for(int i = 0; i < 8; i++){
		v.push_back(int(a[i]) - 48);
		v.push_back(int(b[i]) - 48);
	}
	
	sol(v);
	return 0;
}
