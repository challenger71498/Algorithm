//#include <iostream>
//#include <algorithm>
//#include <climits>
//
//using namespace std;
//
//int arr[1001];
//int dp[1001];
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	int n;
//	cin >> n;
//	for (int i = 1; i <= n; ++i) {
//		cin >> arr[i];
//	}
//
//	for (int i = 1; i <= n; ++i) {
//		if (dp[i] == 0) {
//			dp[i] = 1;
//		}
//
//		for (int j = 1; j <= i; ++j) {
//			if (arr[j] < arr[i]) {
//				if (dp[i] < dp[j] + 1) {
//					dp[i] = dp[j] + 1;
//				}
//			}
//		}
//	}
//
//	cout << *max_element(dp + 1, dp + n + 1) << '\n';
//}