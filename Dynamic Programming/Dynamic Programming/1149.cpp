//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//int r[1001];
//int g[1001];
//int b[1001];
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	int n;
//	cin >> n;
//
//	for (int i = 0; i < n; ++i) {
//		int red, green, blue;
//
//		cin >> red >> green >> blue;
//		r[i] = red;
//		g[i] = green;
//		b[i] = blue;
//	}
//
//	for (int i = 1; i < n; ++i) {
//		r[i] += min(g[i - 1], b[i - 1]);
//		g[i] += min(r[i - 1], b[i - 1]);
//		b[i] += min(r[i - 1], g[i - 1]);
//	}
//
//	cout << min({ r[n - 1], g[n - 1], b[n - 1] }) << '\n';
//}