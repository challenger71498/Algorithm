//#include <iostream>
//#include <algorithm>
//#include <climits>
//
//using namespace std;
//
//typedef pair<int, int> ii;
//
//ii arr[100001];
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
//
//		for (int j = 1; j <= n; ++j) {
//			cin >> arr[j].first >> arr[j].second;
//		}
//
//		sort(arr + 1, arr + n + 1,
//			[](ii x, ii y) {
//				return x.first < y.first;
//			}
//		);
//
//		int sum = 1;
//		int min = arr[1].second;
//		for (int j = 2; j <= n; ++j) {
//			if (arr[j].second < min) {
//				sum++;
//				min = arr[j].second;
//			}
//		}
//
//		cout << sum << '\n';
//	}
//}