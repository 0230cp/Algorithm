#include<bits/stdc++.h>
using namespace std;

void sol(const string& line){
	int smallCnt = 0;
	int bigCnt = 0;
	int spaceCnt = 0;
	int numCnt = 0;
	
	for(char c : line){
		if(islower(c)){
			smallCnt++;
		}
		else if(isupper(c)){
			bigCnt++;
		}
		else if(isspace(c)){
			spaceCnt++;
		}
		else if(isdigit(c)){
			numCnt++;
		}
	}
	cout << smallCnt << " " << bigCnt << " " << numCnt << " " << spaceCnt << '\n';
}

int main(){
	string line;
	while(getline(cin, line)){
		sol(line);
	}
	return 0;
}

