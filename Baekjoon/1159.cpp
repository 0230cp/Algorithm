#include <bits/stdc++.h>
using namespace std;

int countArr[26];

int main(){
	int total;
	string s;
	string ret = " ";
	int check = 0;
	
	cin >> total;
	
	for(int i = 0; i < total; i++){
		cin >> s;
		countArr[s[0] - 'a']++;
	}
	
	for(int i = 0; i < 26; i++){
		if(countArr[i] > 4){
			cout << (char)(97 + i);
			check++;
		}
	}
	
	if(check == 0){
		cout << "PREDAJA";
	}
	
	return 0;
}
