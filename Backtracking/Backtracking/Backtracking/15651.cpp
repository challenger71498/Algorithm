//#include <iostream>
//
//using namespace std;
//
//int n, m;
//
//int save[8];
//
//void track(int start, int depth) {
//	save[depth] = start;
//
//	if (depth == m - 1) {
//		for (int i = 0; i < m; ++i) {
//			cout << save[i] << ' ';
//		}
//		cout << '\n';
//	}
//	else {
//		for (int i = 1; i <= n; ++i) {
//			track(i, depth + 1);
//		}
//	}
//}
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	cin >> n >> m;
//
//	for (int i = 1; i <= n; ++i) {
//		track(i, 0);
//	}
//}