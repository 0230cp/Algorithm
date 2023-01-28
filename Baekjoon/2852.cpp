#include <bits/stdc++.h>
using namespace std;
#define prev pre
int A,B,asum,bsum,n,w;
string t, prev;

int stringToInt(string a){
	return atoi(a.substr(0,2).c_str()) * 60 + atoi(a.substr(3,2).c_str());
}

void update(int &sum, string time){
	sum += (stringToInt(time) - stringToInt(prev)); 
}

string print(int a){
	string mm = "00" + to_string(a / 60);
	string ss = "00" + to_string(a % 60);
	return mm.substr(mm.size() - 2, 2) + ":" + ss.substr(ss.size()-2,2);
}

int main(){
	cin >> n;
	for(int i = 0; i <n; i++){
		cin >> w >> t;
		if(A>B) update(asum, t);
		else if(B>A) update (bsum, t);
		w == 1 ? A++ : B++;
		prev = t;
	}
	
	if(A>B) update(asum, "48:00");
	else if(B>A) update(bsum, "48:00");
	cout << print(asum) << '\n';
	cout << print(bsum) << '\n';
}
