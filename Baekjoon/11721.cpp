#include <bits/stdc++.h>
using namespace std;

int sum;
string s;
int cnt;

void input(){
	cin >> s;
}

void sol(){
	for(int i = 0; i < s.size(); i++){
		cout << s[i];
		if(i % 10 == 9) cout << '\n'; 
	}
}

int main(){
	input();
	sol();
}
