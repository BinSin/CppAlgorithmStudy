#include <iostream>
#include <algorithm>
typedef long long LL;
using namespace std;
int main() {
	LL arr[5];
	LL d = 0;
	for (int i = 0; i < 5; i++) {
		cin >> arr[i];
		d += arr[i];
	}
	sort(arr, arr+5);
	cout << d - arr[4] << " " << d - arr[0] << endl;
}