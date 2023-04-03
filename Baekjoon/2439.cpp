#include <bits/stdc++.h>
using namespace std;

int input(){
	int n;
	cin >> n;
	return n;
}

void sol(int num){
	for(int i = 0; i < num; i++){
		for(int j = 1; j <= num-i; j++){
		 cout << "*";
		}
		cout << '\n';
	}
}

int main(){
	sol(input());
}
