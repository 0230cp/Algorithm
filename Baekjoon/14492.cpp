#include<bits/stdc++.h>
using namespace std;

int n;
int a[304][304];
int b[304][304];

void input(){
	cin >> n;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			cin >> a[i][j];
		}
	}
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j <n; j++){
			cin >> b[i][j];
		}
	}
}

void sol(){
	int cnt = 0;
	bool check = false;
	for(int i = 0; i < n; i++){
		for(int j =0; j < n; j++){
			check = false;
			for(int k = 0; k < n; k++){
				if(a[i][k] && b[k][j] == 1) check = true; 
			}
			if(check == true) cnt++;
		}
	}	
	cout << cnt << '\n';
}

int main(){
	input();
	sol();
}
