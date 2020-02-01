//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//int arr[100001]{1};
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	int n;
//	cin >> n;
//
//	arr[0] = 0;
//
//	for (int i = 1; i <= n; ++i) {
//		arr[i] = i;
//		for (int j = 0; i - j * j >= 0; ++j) {
//			arr[i] = min(arr[i], arr[i - j * j] + 1);
//		}
//		//cout << arr[i] << ' ';
//	}
//	//cout << '\n';
//
//	cout << arr[n] << '\n';
//}