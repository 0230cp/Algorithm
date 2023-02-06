#include <bits/stdc++.h>
using namespace std;

priority_queue<double,vector<double>, greater<double>> pq;
vector<double> v;
int n;
double a;

int main(){
	cin >> n;
	while(n--){
		cin >> a;
		pq.push(a);
	}
	for(int i = 0; i < 7; i++){
		printf("%.3lf\n", pq.top());
		pq.pop();
	}
}
