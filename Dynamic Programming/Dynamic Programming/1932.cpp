//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//int arr[501][501];
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	int n;
//	cin >> n;
//
//	for (int i = 1; i <= n; ++i) {
//		for (int j = 1; j <= i; ++j) {
//			int x;
//			cin >> x;
//			arr[i][j] = x;
//		}
//	}
//
//	for (int i = 1; i <= n; ++i) {
//		for (int j = 1; j <= i; ++j) {
//			arr[i][j] += max(arr[i - 1][j - 1], arr[i - 1][j]);
//		}
//	}
//
//	cout << *max_element(arr[n], arr[n] + n + 1) << '\n';
//}