#include <bits/stdc++.h>
using namespace std;

a[64][64];
int n,f

int quard(int y, int x, int size){
	if(size == 1) return string (1, a[y][x]);
	char b = a[y][x];
	string ret = "";
	bool flag = 0;
	for(int i = y; i < y + size; i++){
		for(int j = x; j < x+ size; j++){
			if(b != a[i][j]){
				ret += "(";
				ret += quard(y,x,size/2);
				ret += quard(y,x+size/2, size/2);
				ret += quard(y+size / 2, x, size /2);
				ret += quard(y + size/ 2, x+size/2, size/2);
				ret += ')';
				return ret;
			}
		}
	}
}

int main(){
	cin >> n;
	
	for(int i=0; i <n; i++){
		for(int j =0; j <m; j++){
			cin >> a[i][j]; 
		}
	}	
}
