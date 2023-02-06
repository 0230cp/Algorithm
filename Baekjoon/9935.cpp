#include <bits/stdc++.h>
using namespace std;

string s, t;
stack<char> st;

int main(){
	cin >> s >> t;
	
	for(char c : s){
		st.push(c);
		if(st.size() >= t.size() && st.top() == t[t.size() -1 ]){
			string ss = "";
			for(char i : t){
				ss += st.top();
				st.pop();
			}
			reverse(ss.begin(), ss.end());
			if(ss != t){
				for(char a : ss){
					st.push(a);
				}
			}
		}
	}
	if(st.size() == 0) cout << "FRULA" << '\n';
	else{
		string k = "";
		while(st.size()){
			k += st.top();
			st.pop();
		}
		reverse(k.begin(), k.end());
		cout << k << '\n';
	}
}
