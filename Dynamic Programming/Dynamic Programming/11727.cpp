#include <iostream>

using namespace std;

int arr[1001];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;

	arr[1] = 1;
	arr[2] = 3;

	for (int i = 3; i <= n; ++i) {
		arr[i] = (arr[i - 1] + arr[i - 2] * 2) % 10'007;
	}

	cout << arr[n] << '\n';
}