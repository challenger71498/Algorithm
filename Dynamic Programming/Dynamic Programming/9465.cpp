//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//int arr[100'001][2];
//int dp[100'001][3];
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	int t;
//	cin >> t;
//	for (int i = 0; i < t; ++i) {
//		int n;
//		cin >> n;
//		for (int j = 1; j <= n; ++j) {
//			cin >> arr[j][0];
//		}
//		for (int j = 1; j <= n; ++j) {
//			cin >> arr[j][1];
//		}
//
//		dp[1][0] = arr[1][0];
//		dp[1][1] = arr[1][1];
//		dp[1][2] = 0;
//
//		for (int j = 2; j <= n; ++j) {
//			dp[j][0] = max({ dp[j - 1][1] + arr[j][0], dp[j - 1][2] + arr[j][0], arr[j][0] });
//			dp[j][1] = max({ dp[j - 1][0] + arr[j][1], dp[j - 1][2] + arr[j][1], arr[j][1] });
//			dp[j][2] = max({ dp[j - 1][0], dp[j - 1][1], dp[j - 1][2] });
//		}
//
//		cout << *max_element(dp[n], dp[n] + 2) << '\n';
//	}
//}