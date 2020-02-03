//#include <iostream>
//#include <vector>
//#include <climits>
//#include <algorithm>
//#include <numeric>
//
//using namespace std;
//
//int n;
//int arr[21][21];
//int diff = INT_MAX;
//
//vector<int> stt;
//vector<int> lnk;
//void track(int k, int s, int l) {
//	if (s == n / 2) {
//		for (int i = s + l + 1; i <= n; ++i) {
//			lnk.push_back(i);
//		}
//		int temp = abs(accumulate(stt.begin(), stt.end(), 0) - accumulate(lnk.begin(), lnk.end(), 0));
//		diff = min(diff, temp);
//		cout << temp << '\n';
//	}
//	else if (l == n / 2) {
//		for (int i = s + l + 1; i <= n; ++i) {
//			stt.push_back(i);
//		}
//		int temp = abs(accumulate(stt.begin(), stt.end(), 0) - accumulate(lnk.begin(), lnk.end(), 0));
//		diff = min(diff, temp);
//		cout << temp << '\n';
//	}
//	else {
//		for (int i = 1; i <= k; ++i) {
//			stt.push_back(i);
//			track(i, s + 1, l);
//			stt.pop_back();
//			lnk.push_back(1);
//			track(i, s, l + 1);
//			lnk.pop_back();
//		}
//	}
//}
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	cin >> n;
//	for (int i = 1; i <= n; ++i) {
//		for (int j = 1; j <= n; ++j) {
//			cin >> arr[i][j];
//		}
//	}
//
//	track(1, 0, 0);
//
//	cout << diff << '\n';
//
//	system("pause");
//	return 0;
//}