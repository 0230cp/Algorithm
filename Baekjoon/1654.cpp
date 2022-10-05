#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//잘랐을 때 랜선이 몇개 나오는지 구하는 함수
long long cut(long long a, long long b) {
	return a / b;
}

int main() {
	long long n, k;
	vector<long long>v;

	cin >> k;
	cin >> n;

	//vector는 선언된 순간 size가 0이기 때문에 size를 1개 증가시키고
	//집어넣는 방식으로 push_back을 사용한다.
	for (int i = 0; i < k; i++) {
		long long a; cin >> a;
		v.push_back(a);
	}

	sort(v.begin(), v.end());

	long long left = 0;
	long long right = v[k - 1] + 1; 

	while (left + 1 < right) {
		long long sum = 0;
		long long mid = (left + right) / 2;
		
		for (int i = 0; i < k; i++) {
			sum += cut(v[i], mid);
		}
		if (sum >= n) {
			left = mid;
		}
		else if (sum < n) {
			right = mid;
		}
	}

	cout << left;

	return 0;
}
