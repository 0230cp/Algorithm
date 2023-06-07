#include<bits/stdc++.h>
using namespace std;

bool sol(int a, int b){
	return a > b;	
}

int main(){
	int a,b;
	while(cin>> a >> b && a != 0 && b!=0){
		if(sol(a,b)){
			cout << "Yes" << '\n';	
		} else cout << "No" << '\n';
	}
	return 0; 
}
