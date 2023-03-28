#include<bits/stdc++.h>
using namespace std;

int A, B, t;
int cnt = 1;

void inputCount(){
	cin >> t;
}

void input(){
	cin >> A >> B;
}

void output(int a, int b){
	cout << "Case #" << cnt << ": " << a + b << '\n';
	cnt++;
}

int main(){
	inputCount();
	for(int i = 0; i < t; i++){
		input();
		output(A, B);
	}
}
