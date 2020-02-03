#include <iostream>
#include <algorithm>
#include <climits>
#include <cmath>

using namespace std;

int n;
int arr[100002];
int mini = INT_MAX;
int val;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> arr[i];
	}

	int i = 0;
	int j = n - 1;
	while (i < j) {
		int sum = arr[i] + arr[j];

		if (abs(sum) < mini) {
			mini = abs(sum);
			val = sum;
		}

		if (sum < 0) {
			i++;
		}
		else{
			j--;
		}
	}

	cout << val << '\n';
}