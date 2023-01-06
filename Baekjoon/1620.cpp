#include<bits/stdc++.h>
using namespace std;

int n, m, res;
string s;
map<int, string> dogam;
map<string, int> rdogam;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	cin >> n >> m;
	
	for(int i = 0; i < n; i++){
		cin >> s;
		rdogam[s] = i+1;
		dogam[i+1] = s;
	}
	
	for(int i = 0; i < m; i++){
		cin >> s;
		
		if(atoi(s.c_str()) == 0){
			cout << rdogam[s] <<'\n';
		}

		else{
			cout << dogam[atoi(s.c_str())] <<'\n';
		}
	}
}
