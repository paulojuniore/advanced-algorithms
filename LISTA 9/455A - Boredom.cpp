// 455A - Boredom. 17/07/2018
#include <bits/stdc++.h>

typedef long long int lli;

using namespace std;

int main() 
{
	const int MAX = 100001;

	int n, x;
	vector<lli> dp(MAX, 0);
	vector<lli>  c(MAX, 0);

	cin >> n;

	while(n--) {
		cin >> x;
		c[x]++;
	}

	dp[0] = 0;
	dp[1] = c[1];

	for (int i = 2; i < MAX; i++) {
		dp[i] = max(dp[i - 1], dp[i - 2] + i*c[i]);
	}

	cout << dp[MAX - 1];
	
	return 0;
}
