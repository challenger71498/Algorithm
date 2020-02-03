#include <iostream>
#include <deque>
#include <algorithm>
#include <climits>

using namespace std;

typedef pair<int, int> ii;

int arr[502][502];
deque<ii> st;
int len[502][502];
int n;

void chk(int x, int y) {
	int v = arr[x][y];
	int* l = &len[x][y];

	if (v != arr[x + 1][y]) {
		*l = max(*l, len[x + 1][y]);
	}
	if (v != arr[x - 1][y]) {
		*l = max(*l, len[x - 1][y]);
	}
	if (v != arr[x][y + 1]) {
		*l = max(*l, len[x][y + 1]);
	}
	if (v != arr[x][y - 1]) {
		*l = max(*l, len[x][y - 1]);
	}

	*l += 1;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n;
	for (int i = 1; i <= n; ++i) {
		for (int j = 1; j <= n; ++j) {
			cin >> arr[i][j];
			st.push_back({ i, j });
		}
	}

	sort(st.begin(), st.end(), [](ii a, ii b) {
		return arr[a.first][a.second] > arr[b.first][b.second];
		});

	for (int i = 0; i < st.size(); ++i) {
		chk(st[i].first, st[i].second);

		/*for (int j = 1; j <= n; ++j) {
			for (int k = 1; k <= n; ++k) {
				cout << len[j][k] << ' ';
			}
			cout << '\n';
		}
		cout << '\n';*/
	}

	int maxi = INT_MIN;
	for (int i = 1; i <= n; ++i) {
		for (int j = 1; j <= n; ++j) {
			maxi = max(maxi, len[i][j]);
		}
	}

	cout << maxi << '\n';
}