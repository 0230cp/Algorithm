#include <bits/stdc++.h>
using namespace std;

string str, out;
int arr[27] = {0, };
int flag = 0;
char mid;



bool desc(int a, int b){
	return a > b;
}

int main(){
	cin >> str;
	
	for(char a : str) arr[a]++;
	
	for(int i = 'Z'; i >= 'A'; i--){
		if(arr[i] & 1){
			mid = char(i); flag++;
			arr[i]--;
		}
		if(flag == 2) break;
		for(int j = 0; j < arr[i]; j+=2){
			out = char(i) + out;
			out += char(i);
		}
	}
	
	if(mid) out.insert(out.begin() + out.size() / 2, mid);
	if(flag == 2) cout << "I'm Sorry Hansoo\n";
	else{
		cout << out << '\n';
	}
}
