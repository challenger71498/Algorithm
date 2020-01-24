#include <iostream>

using namespace std;

int arr[12];

int main() {
	arr[1] = 1;
	arr[2] = 2;
	arr[3] = 4;
	arr[4] = 7;

	int t;
	cin >> t;

	for (int k = 0; k < t; ++k) {
		int n;
		cin >> n;

		for (int i = 5; i <= n; ++i) {
			arr[i] =
				arr[i - 1] +
				arr[i - 2] +
				arr[i - 3];
		}

		cout << arr[n] << endl;
	}
}