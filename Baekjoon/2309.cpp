#include <bits/stdc++.h>
using namespace std;

#define MAX 101
int tallArr[9] = {MAX, };

int main(){
	int t;
	int sum = 0;
	int f;
	
	for(int i = 0; i < 9; i++){
		cin >> tallArr[i];
		sum += tallArr[i];
	}
	
	f = sum - 100;
	
	for(int i = 0; i < 9; i++){
		for(int j = 0; j < 9; j++){
			
			if(tallArr[i] + tallArr[j] == f && i != j){
					tallArr[i] = MAX;
					tallArr[j] = MAX;
	
				sort(tallArr, tallArr+9);
	
				for(int i = 0; i < 7; i++){
					cout << tallArr[i] << '\n';
				}	
	
				return 0;
			}	
		}
	}
	
	return 0;
	
	
}
