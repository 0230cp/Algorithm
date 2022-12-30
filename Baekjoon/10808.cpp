#include <bits/stdc++.h>
using namespace std;

int main(){
	string s;
	int a;
	int word[27] = {0, };
	
	cin >> s;
	
	for(int i = 0; i < s.size(); i++){
		a =	(int)s[i] - 96;
		word[a]++;
	}
	
	for(int i = 1; i <= 26; i++){
		cout << word[i] << " ";
	}
	
	return 0;
}
