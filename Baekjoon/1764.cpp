#include<bits/stdc++.h>
using namespace std;

int n, m;

int main(){
	cin >> n >> m;
	unordered_set<string> notHear;
	vector<string> ret;
	
	string word;
	for(int i = 0; i < n; i++){
		cin >> word;
		notHear.insert(word);
	}
	for(int j = 0; j < m; j++){
		cin >> word;
		if(notHear.find(word) != notHear.end()){
			ret.push_back(word);
		}
	}
	sort(ret.begin(), ret.end());
	
	cout << ret.size() <<'\n';
	for(auto a : ret){
		cout << a << '\n';
	}
	return 0;
}

