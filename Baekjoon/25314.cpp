#include <bits/stdc++.h>
using namespace std;

int n;

void input(){
	cin >> n;
}

void sol(){
	int a = n / 4;
	
	for(int i = 0; i < a; i++){
		cout << "long ";
	}
	
	cout << "int";
}

int main(){
	input();
	sol();
}
