#include<bits/stdc++.h>
using namespace std;

vector<int> v;

void func(){
	string s;
	cin >> s;
	
	if(s == "add"){
		int a;
		cin >> a;
		
		auto it = find(v.begin(), v.end(), a);
		if(it == v.end()){
			v.push_back(a);
		}
	}
	
	else if(s == "remove"){
		int a;
		cin >> a;
		
		auto it = find(v.begin(), v.end(), a);
		int idx = find(v.begin(), v.end(), a) - v.begin();
		if(it != v.end()){
			v.erase(v.begin() + idx);
		}
	}
	
	else if(s == "check"){
		int a;
		cin >> a;
		
		auto it = find(v.begin(), v.end(), a);
		if(it != v.end()){
			cout << 1 << '\n';
		}else cout << 0 << '\n';
	}
	
	else if(s == "toggle"){
		int a;
		cin >> a;
		
		auto it = find(v.begin(), v.end(), a);
		int idx = find(v.begin(), v.end(), a) - v.begin();
		if(it == v.end()){
			v.push_back(a);
		}else{
			v.erase(v.begin() + idx);
		}
	}
	
	else if(s == "all"){
		v.clear();
		for(int i = 1; i <= 20; i++){
			v.push_back(i);
		}
	}
	
	else if(s == "empty"){
		v.clear();
	}
}

int main(){
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	
	int a;
	cin >> a;
	while(a--){
		func();
	}
}
