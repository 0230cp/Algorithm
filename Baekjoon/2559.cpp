#include <bits/stdc++.h>
using namespace std;

int main(){
	int n; //size of arr
	int k; // size of sum
	int a; // arr
	int res = -11111; //result
	
	cin >> n;
	cin >> k;
	
	int sumArr[n] = {0, };
	vector<int> v1;
	
	for(int i = 1; i <= n; i++){
		cin >> a;
		sumArr[i] = sumArr[i-1] + a;
	}
		
	for(int i = k; i <= n; i++){
		res = max(res, sumArr[i] - sumArr[i-k]);
	}
	
	cout << res;
	
}

