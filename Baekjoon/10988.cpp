#include <bits/stdc++.h>
using namespace std;

int main(){
//	string s;
//	int size;
//		 
//	cin >> s;
//	size = s.size();
//	
//	for(int i = 0; i < size/2; i++){
//			if(s[size-i-1] != s[i]){
//				cout << "0";
//				return 0;
//			}	
//	}
//	cout << "1";
//	return 0;


string s;
string r;

cin >> r;
s = r;

reverse(r.begin(), r.end());

if(s == r){
	cout << "1";
}
else cout << "0";

return 0;
}
