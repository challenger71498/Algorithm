//#include <iostream>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//
//string a;
//string b;
//
//string sum(const string& a, const string& b) {
//	string big;
//	string small;
//	if (a.size() > b.size()) {
//		big = a;
//		small = b;
//	}
//	else {
//		big = b;
//		small = a;
//	}
//
//	int carry = 0;
//	for (int i = big.size() - 1; i >= 0; --i) {
//		int k;
//		k = big[i] - '0' + small[i - big.size() + small.size()] - '0' + carry;
//		if(i < big.size() - small.size()) {
//			k = big[i] - '0' + carry;
//		}
//
//		if (k >= 10) {
//			carry = 1;
//			k -= 10;
//		}
//		else {
//			carry = 0;
//		}
//		//cout << k << '\n';
//		big[i] = k + '0';
//	}
//	if (carry == 1) {
//		big.insert(big.begin(), '1');
//	}
//
//	return big;
//}
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//
//	cin >> a >> b;
//
//	cout << sum(a, b) << '\n';
//
//	system("pause");
//	return 0;
//}