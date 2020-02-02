//#include <iostream>
//#include <algorithm>
//#include <cmath>
//
//using namespace std;
//
//long long arr[1000001];
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	int n, b, c;
//	cin >> n;
//	for (int i = 0; i < n; ++i) {
//		cin >> arr[i];
//	}
//
//	cin >> b >> c;
//
//	long long sum = 0;
//	for (int i = 0; i < n; ++i) {
//		double k = max(0ll, arr[i] - b);
//		sum += 1 + ceil(k / c);
//	}
//
//	cout << sum << '\n';
//}