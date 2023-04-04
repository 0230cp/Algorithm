#include <bits/stdc++.h>
using namespace std;

int input(){
	int n;
	cin >> n;
	return n;
}

void sol(int num){
	for(int i = 0; i < num; i++){
		for(int j = 0; j < i; j++) cout << " ";
		for(int j = 0; j < 2 * (num-i) -1; j++) cout << "*";
		cout << '\n';
	}
	
	for(int i = 0; i < num -1; i++){
		for(int j = 0; j < num-i-2; j++) cout << " ";
		for(int j = 0; j < 2 * (i+2) - 1; j++) cout <<"*";
		cout << '\n';
	}
}

int main(){
	sol(input());
}
