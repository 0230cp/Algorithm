#include <bits/stdc++.h>
using namespace std;

int n;

void input(){
	cin >> n;
}

void sol(){
	for(int i = 1; i < 10; i++){
		cout << n << " * " <<  i << " = " << n*i  << '\n';
	}
}

int main(){
	input();
	sol();
}
