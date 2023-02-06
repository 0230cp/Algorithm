#include <bits/stdc++.h>
using namespace std;

priority_queue<int, vector<int>, greater<int>> q;
int n,a;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> n;
	while(n--){
		cin >> a;
		if(a == 0){
		if(q.empty()) cout << 0 << '\n';
		else cout << q.top() << '\n', q.pop();
		} 
		else q.push(a);
	}
}
