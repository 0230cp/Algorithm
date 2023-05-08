#include<bits/stdc++.h>
using namespace std;

string s;

void input(){
	cin >> s;
}

void sol(){
	string a;
	vector<string> v;
	
	for(int i = 0; i < s.length(); i++){
		for(int j = i; j < s.length(); j++){
			 a += s[j];
		} 
		v.push_back(a);
		a = "";
	}
	
	sort(v.begin(), v.end());
	
	for(auto k : v){
		cout << k << ' ';
	}
}

int main(){
	input();
	sol();
}
