#include<bits/stdc++.h>
using namespace std;

multiset<int> ms;

void instruction(){
	char c;
	int a;
	cin >> c >> a;
	
	if(c == 'I'){
		ms.insert(a);
	}
	else if(c == 'D'){		
		if(!ms.empty()){
			if(a == 1){
			ms.erase(--ms.end());
		}
		else if(a == -1){
			ms.erase(ms.begin());
		}
	}
}
}

void sol(){
	int k;
	cin >> k;
	
	while(k--){
		instruction();
	}
}

void print(){
	if(ms.empty()) cout << "EMPTY" << '\n';
	else{
		cout << *(--ms.end()) << " " << *(ms.begin()) << "\n";
	}
}

int main(){
	int t;
	cin >> t;
	
	while(t--){
		sol();
		print();
		ms.clear();
	}
}
