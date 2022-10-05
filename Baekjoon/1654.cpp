#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//�߶��� �� ������ � �������� ���ϴ� �Լ�
long long cut(long long a, long long b) {
	return a / b;
}

int main() {
	long long n, k;
	vector<long long>v;

	cin >> k;
	cin >> n;

	//vector�� ����� ���� size�� 0�̱� ������ size�� 1�� ������Ű��
	//����ִ� ������� push_back�� ����Ѵ�.
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
