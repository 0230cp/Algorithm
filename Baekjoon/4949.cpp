#include <bits/stdc++.h>
using namespace std;

stack<char> st;
string s;

bool check(string a){
	while(st.size()){
		st.pop();
	}
	for(char c : a){
		if(c == '(' || c==')' || c=='[' || c==']'){ 
			if(!st.empty() && c == ')' && st.top() == '(')  st.pop();
			else if(!st.empty() && c == ']' && st.top() == '[') st.pop();
			else st.push(c);
		}
	}
	if(st.empty()) return true;
	else return false;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	while(1){
		getline(cin, s);
		if(s == ".")break;
		if(check(s)) cout << "yes\n";
		else cout << "no\n";
	}
}
