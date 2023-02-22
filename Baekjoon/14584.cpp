#include <bits/stdc++.h>
using namespace std;

int n;
string s;
string a[24];

int main(){
	cin >> s;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	
	for(int i = 0; i < 26; i++){
		for(int j = 0; j < n; j++){
			if(s.find(a[j]) != string::npos){
				cout << s << '\n';
				return 0;
			}
		}
		
		for(int j = 0; j < s.length(); j++){
			s[j] = (s[j] - 'a' + 1) % 26 + 'a';
		}		
	}
}
