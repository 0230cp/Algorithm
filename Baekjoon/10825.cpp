#include<bits/stdc++.h>
using namespace std;

int n;
vector <pair<string, vector<int>>> v;

void input(){
	string s;
	int a,b,c;
	cin >> n;
	for(int i =0; i < n; i++){
		cin >> s;
		cin >> a >> b >> c;
		v.push_back(make_pair(s, vector<int>({a,b,c})));
	}
}

bool cmp(pair<string, vector<int>> a, pair<string,vector<int>> b){
	if(a.second[0] == b.second[0]){
		if(a.second[1] == b.second[1]){
			if(a.second[2] == b.second[2]){
				return a.first < b.first;
			}
			return a.second[2] > b.second[2];
		}
		return a.second[1] < b.second[1];
	}
	return a.second[0] > b.second[0];
}

void sol(){
	sort(v.begin(), v.end(),cmp);
	for(int i = 0; i <n; i++){
		cout << v[i].first << '\n';
	}
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	input();
	sol();
}
