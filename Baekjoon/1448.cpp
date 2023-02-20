#include <bits/stdc++.h>
using namespace std;

int n;
int l[1000004];

bool cmp(int a, int b){
	return a > b;
}

int main(){
	cin >> n;
	for(int i = 0; i < n; i++){
		 cin >> l[i]; 
	} 
	
	sort(l, l+n, cmp);
	
	for(int i = 0; i < n-1; i++){
		if(l[i] < l[i+1] + l[i+2]){
			cout << l[i] + l[i+1] + l[i+2] << '\n';
			break;
		}
	else if(i == n-2){
		cout << -1 <<'\n';
	}	
	}
}
