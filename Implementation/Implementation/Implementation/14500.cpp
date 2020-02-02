//#include <iostream>
//#include <climits>
//#include <numeric>
//#include <algorithm>
//
//using namespace std;
//
//int n, m;
//int arr[502][502];
//
//int save[4];
//pair<int, int> trace[4];
//int maxi = INT_MIN;
//void rec(int x, int y, int depth) {
//	save[depth] = arr[x][y];
//	trace[depth] = { x, y };
//
//	for (int i = 0; i < depth; ++i) {
//		if (depth != 0 && trace[i].first == x && trace[i].second == y) {
//			return;
//		}
//	}
//
//	if (depth == 3) {
//		int sum = accumulate(save, save + 4, 0);
//		if (maxi < sum) {
//			maxi = max(maxi, sum);
//			/*for (int i = 0; i < 4; ++i) {
//				cout << save[i] << ' ';
//			}
//			cout << '\n';*/
//		}
//
//	}
//	else {
//		if (x != 1) {
//			rec(x - 1, y, depth + 1);
//		}
//		if (x != n) {
//			rec(x + 1, y, depth + 1);
//		}
//		if (y != 1) {
//			rec(x, y - 1, depth + 1);
//		}
//		if (y != n) {
//			rec(x, y + 1, depth + 1);
//		}
//
//		if (depth == 2) {
//			if (trace[1].first != 1) {
//				rec(trace[1].first - 1, trace[1].second, depth + 1);
//			}
//			if (trace[1].first != n) {
//				rec(trace[1].first + 1, trace[1].second, depth + 1);
//			}
//			if (trace[1].second != 1) {
//				rec(trace[1].first, trace[1].second - 1, depth + 1);
//			}
//			if (trace[1].second != n) {
//				rec(trace[1].first, trace[1].second + 1, depth + 1);
//			}
//		}
//	}
//}
//
//int main() {
//	cin >> n >> m;
//
//	for (int i = 1; i <= n; ++i) {
//		for (int j = 1; j <= m; ++j) {
//			cin >> arr[i][j];
//		}
//	}
//
//	fill_n(trace, 4, pair<int, int>{ 1, 1 });
//
//	for (int i = 1; i <= n; ++i) {
//		for (int j = 1; j <= m; ++j) {
//			rec(i, j, 0);
//		}
//	}
//
//	cout << maxi << '\n';
//}