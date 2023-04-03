#include <bits/stdc++.h>
using namespace std;

int input(){
	int n;
	cin >> n;
	return n;
}

void sol(int num){
	for(int i = 1; i <= 2*num-1; i++){
		for(int j = 1; j <= num; j++){
			if(i <= num){
				if(j > num - i) cout << "*";
				else cout << " ";
			}else{
				if(j > i - num) cout << "*";
				else cout << " ";
			}
		}
		cout << '\n';
	}
}

int main(){
	sol(input());
}
