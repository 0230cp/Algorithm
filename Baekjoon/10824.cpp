#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

string a,b,c,d;

void input(){
	cin >> a >> b >> c >> d;
}

void sol(){
	string n, m;
	n = a + b;
	m = c+ d;
	
	ll i, j;
	i = stoll(n);
	j = stoll(m);
	
	cout << i + j << '\n';
}

int main(){
	input();
	sol();
}
