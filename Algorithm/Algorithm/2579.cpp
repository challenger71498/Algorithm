//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//int stair[301];
//int arr[301];
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	int n;
//	cin >> n;
//
//	for (int i = 1; i <= n; ++i) {
//		int k;
//		cin >> k;
//		stair[i] = k;
//	}
//
//	arr[1] += stair[1];
//	arr[2] = stair[1] + stair[2];
//
//	for (int i = 3; i <= n; ++i) {
//		arr[i] = max(stair[i] + stair[i - 1] + arr[i - 3], stair[i] + arr[i - 2]);
//	}
//
//	cout << arr[n] << '\n';
//}