#include<bits/stdc++.h>
using namespace std;


void sol(int n){
	int a;
	priority_queue<int, vector<int>> pq;
	
	while(n--){
		cin >> a;
		if(a == 0){
			if(pq.empty()){
				cout << 0 << '\n';
			}else{
				cout << pq.top() << '\n';
				pq.pop();
			}
		}else{
			pq.push(a);
		}	
	}
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin >> n;
	sol(n);
	return 0;
}

