//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//int db[10001];
//int arr[10001];
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	int n;
//	cin >> n;
//
//	for (int i = 1; i <= n; ++i) {
//		cin >> db[i];
//	}
//
//	arr[1] = db[1];
//	arr[2] = db[1] + db[2];
//	arr[3] = db[3] + max(db[1], db[2]);
//
//	for (int i = 3; i <= n; ++i) {
//		arr[i] = db[i] + max(arr[i - 3] + db[i - 1], arr[i - 2]);
//		arr[i] = max(arr[i], arr[i - 1]);	// 이번 포도주를 먹었을 때 더 못먹게 되면 이전 값을 그대로 가져온다.
//	}
//
//	cout << arr[n] << '\n';
//}