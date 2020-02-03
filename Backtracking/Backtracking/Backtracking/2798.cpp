#include <iostream>
#include <algorithm>
#include <climits>
#include <cmath>

using namespace std;

int n, m;
int arr[101];
int used[101];

long long diff = LLONG_MAX;
long long trk[3];
int best;
void track(int depth) {
	if (depth == 3) {
		//cout << trk[0] << ' ' << trk[1] << ' ' << trk[2] << '\n';
		long long temp = (long long)m - (trk[0] + trk[1] + trk[2]);
		if (0 <= temp && temp < diff) {
			diff = temp;
			best = trk[0] + trk[1] + trk[2];
		}
	}
	else {
		for (int i = 1; i <= n; ++i) {
			if (used[i] != 1) {
				trk[depth] = arr[i];
				used[i] = 1;
				track(depth + 1);
				used[i] = 0;
			}
		}
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n >> m;

	for (int i = 1; i <= n; ++i) {
		cin >> arr[i];
	}

	track(0);

	string s;

	cout << best << '\n';
}