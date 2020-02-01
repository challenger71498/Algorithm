//#include <iostream>
//#include <algorithm>
//#include <climits>
//
//#define MAXX 12345678
//
//using namespace std;
//
//int coins[101];
//int dp[10001];
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	fill_n(dp, 10001, MAXX);
//
//	int n, k;
//	cin >> n >> k;
//
//	for (int i = 1; i <= n; ++i) {
//		cin >> coins[i];
//	}
//
//	dp[0] = 1;
//	for (int i = 1; i <= n; ++i) {
//		for (int j = 1; j <= k; ++j) {
//
//			if (j - coins[i] >= 0) {
//				dp[j] = min(dp[j], dp[j - coins[i]] + 1);
//			}
//		}
//	}
//
//	for (auto& i : dp) {
//		if (i == MAXX) {
//			i = -1;
//		}
//	}
//
//	for (int i = 1; i <= k; ++i) {
//		cout << dp[i] << ' ';
//	}
//	cout << '\n';
//
//	cout << dp[k] << '\n';
//}