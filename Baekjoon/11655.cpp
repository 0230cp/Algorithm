#include <bits/stdc++.h>
using namespace std;

int main(){
	string s;
	
	getline(cin, s);
	
	for(int i = 0; i < s.size(); i++){
		
		if(s[i] >= 65 && s[i] <= 90){
			
			if(s[i] + 13 > 90){
				s[i] = s[i] + 13 - 'Z' + 'A' - 1;
			}
			else{
				s[i] = s[i] + 13;
			}
			
		}
		
		else if(s[i] >= 97 && s[i] <= 122){

			if(s[i] + 13 > 122){
				s[i] = s[i] + 13 - 'z' + 'a' - 1; 
			}
			
			else {
				s[i] = s[i] + 13;
			}
		
		}
	}
	cout << s;
}
