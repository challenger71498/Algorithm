#include <iostream>
#include <vector>

using namespace std;

int arr[14];
int k;

vector<int> tracking;
void DFS(int index, int depth = 0) {
	if (depth == 5) {
		for (int i = 0; i < tracking.size(); ++i) {
			cout << tracking[i] << ' ';
		}
		cout << '\n';
	}
	else {
		for (int i = 0; i < k; ++i) {
			if (arr[index] < arr[i]) {
				tracking.push_back(arr[i]);
				DFS(i, depth + 1);
			}
		}
	}

	if (tracking.size() != 0) {
		tracking.pop_back();
	}
	
}

int main() {
	while (true) {

		cin >> k;
		if (k == 0) {
			break;
		}

		for (int i = 0; i < k; ++i) {
			cin >> arr[i];
		}

		for (int i = 0; i < k - 5; ++i) {
			tracking.clear();
			tracking.push_back(arr[i]);
			DFS(i);
		}
		cout << '\n';
	}
}