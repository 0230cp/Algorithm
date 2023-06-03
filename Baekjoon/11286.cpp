#include <iostream>
#include <queue>
#include <cmath>
using namespace std;

int n;

struct Compare {
    bool operator()(int a, int b) {
        if (abs(a) == abs(b)) {
            return a > b;
        } else {
            return abs(a) > abs(b);
        }
    }
};

void sol(){
	int a;
	priority_queue<int, vector<int>, Compare> pq;
	for(int i = 0; i < n; i++){
		cin >> a;
		
		if(a == 0){
			if(pq.empty()) cout << "0" << '\n';
			else{
				cout << pq.top() << '\n';
				pq.pop();
			}
		}else{
			pq.push(a);
		}
	}
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> n;
	sol();
}
