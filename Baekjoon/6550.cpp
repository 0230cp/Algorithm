#include <bits/stdc++.h>
using namespace std;

string s, t;
int k;
bool flag;

void solve(string a, string b){
	k = 0;
	for(int i = 0; i < a.size(); i++){
		if(b.find(a[i]) != string::npos){
			int idx = b.find(a[i]);
			b.erase(0,idx+1);	
		} 
		else flag = 0;
	}
	if(flag) cout << "Yes" << '\n';
		else cout << "No" << '\n';
}

int main(){
	while(cin >> s >> t){
		flag = 1;
		solve(s,t);
	}
}
