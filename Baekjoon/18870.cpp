#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int,int> a, pair<int,int> b){
	return a.second < b.second;
}

bool cmp2(pair<int,int> a, pair<int,int> b){
	return a.first < b.first;
}

vector<pair<int,int>> sol(vector<pair<int,int>> v){
	sort(v.begin(), v.end(), cmp);
	int k = 0;
	int assign = 0;
	
	for(int i = 0; i < v.size(); i++){
		if(i == 0){
			k = v[i].second;
			v[i].second = assign;
		}else{
			if(k != v[i].second){
				assign++;
				k = v[i].second;
				v[i].second = assign;	
			}else{
				k = v[i].second;
				v[i].second = assign;
			}
		}
	}
	
	sort(v.begin(), v.end(), cmp2);
	
	return v;
}

int main(){
	int n;
	int i = 1;
	cin >> n;
	
	vector<pair<int,int>> v;
	
	while(n--){
		int a;
		cin >> a;
		v.push_back({i, a});
		i++;
	}
	
	v = sol(v);
	
	for(auto a : v){
		cout << a.second << " ";
	}
	
	return 0;
}
