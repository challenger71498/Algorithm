#include <iostream>

using namespace std;

int arr[301][301];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n, m;
	cin >> n >> m;

	for (int i = 1; i <= n; ++i) {
		for (int j = 1; j <= m; ++j) {
			cin >> arr[i][j];
		}
	}

	for (int i = 1; i <= n; ++i) {
		for (int j = 1; j <= m; ++j) {
			arr[i][j] += arr[i][j - 1];
		}
	}

	for (int j = 1; j <= m; ++j) {
		for (int i = 1; i <= n; ++i) {
			arr[i][j] += arr[i - 1][j];
		}
	}

	int k;
	cin >> k;
	for (int i = 0; i < k; ++i) {
		int a, b, c, d;
		cin >> a >> b >> c >> d;

		int ans = arr[c][d] - arr[a - 1][d] - arr[c][b - 1] + arr[a - 1][b - 1];
		cout << ans << '\n';
	}
}