//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//int arr[1'000'001];
//
//// top-down (recursive)
//int recursive(int n) {
//	if (n == 1) {
//		return 0;
//	}
//	else if (n % 3 == 0 && n % 2 == 0) {
//		arr[n] = 1 + min({ recursive(n / 3), recursive(n / 2), recursive(n - 1) });
//		return arr[n];
//	}
//	else if (n % 3 == 0) {
//		arr[n] = 1 + min(recursive(n / 3), recursive(n - 1));
//		return arr[n];
//	}
//	else if (n % 2 == 0) {
//		arr[n] = 1 + min(recursive(n / 2), recursive(n - 1));
//		return arr[n];
//	}
//	else {
//		arr[n] = 1 + recursive(n - 1);
//		return arr[n];
//	}
//}
//
//int main() {
//
//	arr[1] = 0;
//
//	int n;
//
//	cin >> n;
//
//	// top-down (recursive)
//	//cout << recursive(n) << '\n' << endl;
//
//	// bottom-up (for-loop)
//	for (int i = 2; i <= n; ++i) {
//	
//		if (i % 2 == 0 && i % 3 == 0) {
//			arr[i] = 1 + min({ arr[i / 2], arr[i / 3], arr[i - 1] });
//		}
//		else if (i % 2 == 0) {
//			arr[i] = 1 + min(arr[i / 2], arr[i - 1]);
//		}
//		else if (i % 3 == 0) {
//			arr[i] = 1 + min(arr[i / 3], arr[i - 1]);
//		}
//		else {
//			arr[i] = 1 + arr[i - 1];
//		}
//	}
//
//	cout << arr[n] << '\n';
//}