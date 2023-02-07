#include <bits/stdc++.h>
using namespace std;

int n,a,sum,ret,res;
vector<int> v;


int main(){
	cin >> n;
	 for(int i = 0; i <n; i++){
	 	cin >> a;
	 	v.push_back(a);
	 }
	 cin >> res;
	 sort(v.begin(), v.end());
	 
	 
	 int lo = 0;
	 int hi = v.size() - 1;
	 while(1){
	 	sum = v[lo] + v[hi];
	 	if(sum > res) hi--;
	 	else if(sum <= res) lo++;
	 	if(hi < lo) break;
	 	if(sum == res) ret++;
	 }
	 cout << ret << '\n';
}
