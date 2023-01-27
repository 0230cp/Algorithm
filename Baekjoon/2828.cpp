#include<bits/stdc++.h>
using namespace std;

int main(){
	int n, m, a, temp;
	int r, l;
	int ret = 0;
	
	cin >> n >> m;
	cin >> a;
	
	l = 1;
	
	for(int i = 0; i < a; i++){
		r = l + m -1;
		cin >> temp;
		
		if(temp >= l && temp <= r) continue;
		
		else if(temp < l){
			ret += l - temp;
			l = temp;
		}
		
		else if(temp > r){
			ret += temp - r;
			r = temp;
			l = r - m +1;
		}
		
	}
	
	cout << ret << '\n';
	return 0;
}

