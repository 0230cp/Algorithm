#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
int n,m;
ll c, d;
bool a[20000004];


int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> c;
		a[c] = true;
	}
	
	cin >> m;
	for(int i = 0; i < m; i++){
		cin >> d;
		if(a[d] == true) cout << "1 ";
		else cout << "0 ";
	}
}
