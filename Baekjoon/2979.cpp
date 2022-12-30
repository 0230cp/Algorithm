#include <bits/stdc++.h>
using namespace std;

int main(){
	
	int arr[101] = {0, };
	int a, b, c;
	int s, e;
	int sum = 0;
	
	cin >> a;
	cin >> b;
	cin >> c;
	
	for(int i = 0; i < 3; i++){
		cin >> s;
		cin >> e;
		
		for(int j = s; j < e; j++ ){
			arr[j]++;
		}
	}
	
	for(int i = 0; i < 101; i++){
		if(arr[i] == 1){
			sum += arr[i] * a;
		}
		else if(arr[i] == 2){
			sum += arr[i] * b;
		}
		else if(arr[i] == 3){
			sum += arr[i] * c;
		}
	}
	
	cout << sum;
	
	return 0;
}
