#include<bits/stdc++.h>
using namespace std;

int n,m;

void sol(){
	string site, pw;
	
	unordered_map<string,string> box;
	
	for(int i = 0; i < n; i++){
		cin >> site >> pw;
		box[site] = pw;
 	}
 	
 	for(int i = 0; i < m; i++){
 		string s;
 		cin >> s;
 		
 		cout << box[s] << '\n';
	}
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> n >> m;
	sol();
	
	return 0;
}
