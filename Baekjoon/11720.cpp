#include <bits/stdc++.h>
using namespace std;

int cnt;
int sum;
string s;

void inputCnt(){
	cin >> cnt;
}

void input(){
	cin >> s;
}

void sol(){
	sum = 0;
	for(int i = 0; i < cnt; i++){
		sum += s[i] - 48;
	}
	cout << sum << '\n';
}

int main(){
	inputCnt();
	input();
	sol();
}
