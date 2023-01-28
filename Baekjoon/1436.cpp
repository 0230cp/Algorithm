#include <bits/stdc++.h>
using namespace std;

int n, num, cnt;

int main(){
	cin >> n;
	while(cnt < n){
		num++;
		if(to_string(num).find("666") != string::npos) cnt++;	
	}	
	cout << num << '\n';
}
