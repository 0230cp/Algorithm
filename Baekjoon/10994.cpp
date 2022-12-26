#include <bits/stdc++.h>
using namespace std;

#define MAX 401
char starMap[MAX][MAX];

void star(int y, int x, int depth){
	if(depth == 1){
		starMap[y][x] = '*';
		return;
	}
	
	for(int i = 0; i < 4 * depth - 3; i++){
		if(i == 0 || i == 4 * depth - 4){
			for(int j = 0; j < 4 * depth - 3; j++){
				starMap[y + i][x + j] = '*';
			}
		}
		starMap[y+i][x] = '*';
		starMap[y+i][x + 4 * depth - 4] = '*';
	}
	
	star(y+2, x+2, depth-1);
	
	return;
}

int main(void){
	int n;
	cin >> n;
	
	star(0,0,n);
	
	for(int i = 0; i < 4 * n -3; i++){
		for(int j = 0; j < 4 * n - 3; j++){
			char c = starMap[i][j] == '*' ? '*' : ' ';
			cout << c;
		}
		cout << '\n';
	}
	
	return 0;
}

 
