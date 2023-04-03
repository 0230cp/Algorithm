#include <bits/stdc++.h>
using namespace std;

int input(){
	int n;
	cin >> n;
	return n;
}

void sol(int num){
	for(int i = 1; i <= 2*num-1; i++){
		for(int j = 1; j <= 2*num; j++){
			if(i <= num){
				if(j <= i || j > 2*num-i) cout << "*";
				else cout << " ";
			}else{
				if(j <= 2*num-i || j > i) cout << "*";
				else cout << " ";
			}
		}
		cout << '\n';
	}
}

int main(){
	sol(input());
}
