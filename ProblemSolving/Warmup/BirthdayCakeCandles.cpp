#include <iostream>
using namespace std;
int main() {
	int n, in;
	cin >> n;
	int max = 0, count = 0;
	while (n-- > 0) {
		cin >> in;
		if (in > max) {
			max = in;
			count = 0;
		}
		if (in == max) count++;
	}
	cout << count << endl;
}