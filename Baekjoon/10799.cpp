#include<bits/stdc++.h>
using namespace std;

string s;

void input(){
	cin >> s;
}

void sol(){
	int cnt = 0;
	int ret = 0;
	stack<char> stk;
	for(int i = 0; i < s.size(); i++){
		if(s[i] == '('){
			stk.push(s[i]); 
		}
		else{
			stk.pop(); 
			if(s[i-1] == '('){
				ret += stk.size();
			}
			else{
				ret++; 
			}
		}
	}
	cout << ret << '\n';
}

int main(){
	input();
	sol();
	return 0;
}

