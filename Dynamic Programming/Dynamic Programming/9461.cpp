//#include <iostream>
//
//using namespace std;
//
//long long arr[101];
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	int t;
//	cin >> t;
//
//	for (int i = 0; i < t; ++i) {
//		int n;
//		cin >> n;
//
//		arr[1] = 1;
//		arr[2] = 1;
//		arr[3] = 1;
//		arr[4] = 2;
//		arr[5] = 2;
//
//		for (int j = 6; j <= n; ++j) {
//			arr[j] = arr[j - 1] + arr[j - 5];
//		}
//
//		cout << arr[n] << '\n';
//	}
//}