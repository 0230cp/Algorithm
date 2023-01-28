#include<bits/stdc++.h>
using namespace std;

int t;
string s;
stack<char> st;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	cin >> t;
	
	for(int i = 0; i <t; i++){
		cin >> s;
		
		for(char a : s){
			if(st.size() != 0 && a == ')' && st.top() == '('){
				st.pop();
			}else st.push(a);
		}
		
		if(st.size() != 0){
			cout << "NO" << '\n';
		}else cout << "YES" << '\n';
		
		while(st.size()){
			st.pop();
		}
	}
}
