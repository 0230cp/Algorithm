#include <bits/stdc++.h>
using namespace std;

int x, y;
int months[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
string days[7] = {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"}; 

void input(){
	cin >> x >> y;
}

void sol(int x, int y){
	int total;
	int ret;
	for(int i = 0; i < x-1; i++){
		total += months[i];
	}
	total += y;
	ret = total % 7;
	cout << days[ret];
}

int main(){
	input();
	sol(x,y);
}
