#include<bits/stdc++.h>
using namespace std;

int ret = 0;

void sol(){
	int cnt[30] = {0, };
	string s;
	bool check = true;
	
	cin >> s;
	
	 for(int i = 0; i < s.length(); i++){
        if(i == 0 || s[i] != s[i-1]) cnt[(int)s[i] - 96]++;
    }
	
	for(int i = 0; i < 30; i++){
		if(cnt[i] > 1) {
			check = false;
			break;
		}
	}
	
	if(check == true) ret += 1;
}

void printRet(){
	cout << ret << '\n';
}

int main(){
	int n;
	cin >> n;
	while(n--){
		sol();
	}
	printRet();
	return 0;
}
