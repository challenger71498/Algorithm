#include <iostream>

using namespace std;

long long arr[11];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	long long k;
	cin >> n >> k;

	for (int i = 1; i <= n; ++i) {
		cin >> arr[i];
	}

	int ans = 0;

	for (int i = n; i >= 1; --i) {
		while (k >= arr[i]) {
			k -= arr[i];
			ans++;
		}
	}

	cout << ans << '\n';

	system("pause");
	return 0;
}