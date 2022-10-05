#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long
using namespace std;

//가져갈 수 있는 나무의 길이를 구하는 함수
ll cut(ll a, ll b) {
	if (a < b) {
		return 0;
	}
	return a - b;
}

int main() {
	ll n, m;
	vector<ll> v;

	cin >> n;
	cin >> m;

	for (int i = 0; i < n; i++) {
		ll a; cin >> a;
		v.push_back(a);
	}

	sort(v.begin(), v.end());

	ll left = 0;
	ll right = v[n - 1];
	
	while (left + 1 < right) {
		ll mid = (left + right) / 2;
		ll sum = 0;
		
		for (int i = 0; i < n; i++) {
			sum += cut(v[i], mid);
		}

		if (sum >= m) {
			left = mid;
		}
		else if (sum < m) {
			right = mid;
		}
	}
	cout << left;

	return 0;
}

