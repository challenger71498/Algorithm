//#include <iostream>
//
//using namespace std;
//
//int arr0[41];
//int arr1[41];
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//    arr0[0] = 1;
//    arr1[0] = 0;
//
//    arr0[1] = 0;
//    arr1[1] = 1;
//
//    int t;
//    cin >> t;
//
//    for (int i = 0; i < t; ++i) {
//        int n;
//        cin >> n;
//
//        for (int j = 2; j <= n; ++j) {
//            arr0[j] = arr0[j - 1] + arr0[j - 2];
//            arr1[j] = arr1[j - 1] + arr1[j - 2];
//        }
//
//        cout << arr0[n] << " " << arr1[n] << '\n';
//    }
//}