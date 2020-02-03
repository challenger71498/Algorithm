//#include <iostream>
//#include <climits>
//#include <algorithm>
//
//using namespace std;
//
//int n;
//int arr[101];
//int oper[4];
//
//int maxi = INT_MIN;
//int mini = INT_MAX;
//
//int sum = 0;
//void track(int depth = 1) {
//	if (depth == n) {
//		maxi = max(maxi, sum);
//		mini = min(mini, sum);
//	}
//	else {
//		if (oper[0] != 0) {
//			int rem = sum;
//			oper[0]--;
//			sum += arr[depth];
//			track(depth + 1);
//			oper[0]++;
//			sum = rem;
//		}
//		if (oper[1] != 0) {
//			int rem = sum;
//			oper[1]--;
//			sum -= arr[depth];
//			track(depth + 1);
//			oper[1]++;
//			sum = rem;
//		}
//		if (oper[2] != 0) {
//			int rem = sum;
//			oper[2]--;
//			sum *= arr[depth];
//			track(depth + 1);
//			oper[2]++;
//			sum = rem;
//		}
//		if (oper[3] != 0) {
//			int rem = sum;
//			oper[3]--;
//			sum /= arr[depth];
//			track(depth + 1);
//			oper[3]++;
//			sum = rem;
//		}
//	}
//}
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	cin >> n;
//
//	for (int i = 0; i < n; ++i) {
//		cin >> arr[i];
//	}
//
//	for (int i = 0; i < 4; ++i) {
//		cin >> oper[i];
//	}
//
//	sum = arr[0];
//	track();
//
//	cout << maxi << '\n';
//	cout << mini << '\n';
//}