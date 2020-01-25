//#include <iostream>
//#include <climits>
//#include <algorithm>
//
//using namespace std;
//
//int arr[100'001];
//int maximum = INT_MIN;
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
//	maximum = arr[1];
//
//	for (int i = 1; i < n; ++i) {
//		arr[i + 1] = max({ min(0, maximum), arr[i + 1], arr[i + 1] + arr[i] });
//		if (arr[i + 1] > maximum) {
//			maximum = arr[i + 1];
//		}
//	}
//
//	cout << maximum << '\n';
//}