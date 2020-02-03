//#include <iostream>
//#include <cmath>
//#include <string>
//
//using namespace std;
//
//int arr[6][10];
//int k;
//
//int visited[6];
//void rotate(int n, int cw, int depth) {
//	if (depth == 0) {
//		//cout << "reset\n";
//		fill(visited, visited + 6, 0);
//		visited[n] = 1;
//	}
//	if (n <= 0 || n >= 5) {
//		return;
//	}
//	else {
//		if (visited[n + 1] == 0 && arr[n][3] != arr[n + 1][7]) {
//			//cout << "rotate " << n + 1 << " to " << -cw << '\n';
//			visited[n + 1] = 1;
//			rotate(n + 1, -cw, depth + 1);
//		}
//		if (visited[n - 1] == 0 && arr[n][7] != arr[n - 1][3]) {
//			visited[n - 1] = 1;
//			//cout << "rotate " << n - 1 << " to " << -cw << '\n';
//			rotate(n - 1, -cw, depth + 1);
//		}
//
//		if (cw == 1) {
//			for (int i = 8; i >= 1; --i) {
//				arr[n][i + 1] = arr[n][i];
//			}
//			arr[n][1] = arr[n][9];
//		}
//		else {
//			for (int i = 1; i <= 8; ++i) {
//				arr[n][i - 1] = arr[n][i];
//			}
//			arr[n][8] = arr[n][0];
//		}
//	}
//}
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	for (int i = 1; i <= 4; ++i) {
//		string s;
//		cin >> s;
//		for (int j = 1; j <= 8; ++j) {
//			arr[i][j] = s[j - 1] - '0';
//		}
//	}
//
//	/*for (int i = 1; i <= 4; ++i) {
//		for (int j = 1; j <= 8; ++j) {
//			cout << arr[i][j] << ' ';
//		}
//		cout << '\n';
//	}*/
//
//	cin >> k;
//
//	for (int i = 1; i <= k; ++i) {
//		int x, y;
//		cin >> x >> y;
//		//cout << "rotate " << x << "\n";
//		rotate(x, y, 0);
//		/*for (int i = 1; i <= 4; ++i) {
//			for (int j = 1; j <= 8; ++j) {
//				cout << arr[i][j] << ' ';
//			}
//			cout << '\n';
//		}*/
//	}
//
//	int sum = 0;
//	for (int i = 1; i <= 4; ++i) {
//		sum += pow(2, i - 1) * arr[i][1];
//	}
//
//	cout << sum << '\n';
//
//	/*system("pause");
//	return 0;*/
//}