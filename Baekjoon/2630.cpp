#include <bits/stdc++.h>
using namespace std;

int n;
vector<vector<int>> v;
int white, blue;

void sol(int y, int x, int size){	
	int check = v[y][x];
	
	for(int i = y; i < y + size; i++){
		for(int j = x; j < x + size; j++){
			if(check == 0 && v[i][j] == 1){
				check = 2;
			}
			else if(check == 1 && v[i][j] == 0){
				check = 2;
			}
			if(check == 2){
				sol(y,x,size/2);
				sol(y, x+size/2, size/2);
				sol(y+size/2, x, size/2);
				sol(y+size/2, x+size/2, size/2);
				return;
			}
		}
	}
	if(check == 0) white++;
	else blue++;
}

int main(){
	cin >> n;
	v.resize(n,vector<int>(n));
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cin >> v[i][j]; 
		}
	}
	
	sol(0, 0, n);
	cout << white << '\n';
	cout << blue << '\n';
	return 0;
}
