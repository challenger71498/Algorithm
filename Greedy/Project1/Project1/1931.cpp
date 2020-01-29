#include <iostream>
#include <algorithm>

typedef pair<int, int> ii;

using namespace std;

ii arr[100'101];

bool cmp(const ii& a, const ii& b) {
	return a.second == b.second ? a.first < b.first : a.second < b.second;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;

	for (int i = 1; i <= n; ++i) {
		cin >> arr[i].first >> arr[i].second;
	}

	sort(arr + 1, arr + n + 1, cmp);

	int temp = 0;
	int counter = 0;
	for (int i = 1; i <= n; ++i) {
		//cout << arr[i].first << ' ' << arr[i].second << '\n';

		if (arr[i].first >= temp) {
		
			//cout << arr[i].first << ' ' << arr[i].second << endl;
			temp = arr[i].second;
			counter++;
		}
	}

	cout << counter << '\n';

	return 0;
}