#include <bits/stdc++.h>
using namespace std;

int n,ret,sum;
int f[40];

int fibo(int n){
	if(n == 1 || n == 2){
		ret++;
		return 1;
	}else return fibo(n-1) + fibo(n-2);	
}

void fi(int n){
	f[1] = 1;
	f[2] = f[1];
	
	for(int i = 3; i <= n; i++){
		f[i] = f[i-1] + f[i-2];
		sum++;
	}
}

int main(){
	cin >> n;
	fibo(n);
	fi(n);
	cout << ret << ' ' << sum << '\n';
}


