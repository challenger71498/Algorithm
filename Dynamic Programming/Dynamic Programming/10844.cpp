#include <iostream>
#include <numeric>

#define TRI 1'000'000'000

using namespace std;

long long arr[101][10];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	cin >> n;

	for (int i = 1; i < 10; ++i) {
		arr[1][i] = 1;
	}

	for (int i = 1; i < n; ++i) {
		arr[i + 1][1] += arr[i][0];
		arr[i + 1][1] %= TRI;
		arr[i + 1][8] += arr[i][9] % TRI;
		arr[i + 1][8] %= TRI;

		for (int j = 1; j <= 8; ++j) {
			arr[i + 1][j - 1] += arr[i][j];
			arr[i + 1][j - 1] %= TRI;
			arr[i + 1][j + 1] += arr[i][j];
			arr[i + 1][j + 1] %= TRI;
		}
	}
	cout << accumulate(arr[n], arr[n] + 10, 0ll) % TRI << '\n';
}