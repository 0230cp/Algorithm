#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int n,a;
ll dp[104];

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	cin >> n;
	
	while(n--){
		cin >> a;
	dp[0] = dp[1] = dp[2] = 1;
	dp[3] = dp[4] = 2;
	
	for(int i = 5; i < a; i++){
		dp[i] = dp[i-1] + dp[i-5];
	}	
	cout << dp[a-1] << '\n';
	}
}
