#include <bits/stdc++.h>
using namespace std;

int chess[6] = {1,1,2,2,2,8};
int a[6];

int main(){
	for(int i = 0; i < 6; i++){
		cin >> a[i];
		if(a[i] != chess[i]) cout << chess[i] - a[i] << ' '; 
		else cout << 0 << ' ';
	}
	
}
