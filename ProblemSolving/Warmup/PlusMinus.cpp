#include <iostream>
using namespace std;
int main() {
	int n, in, p = 0, m = 0, z = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> in;
		if (in > 0) p++;
		else if (in < 0) m++;
		else z++;
	}
	cout << (double)p / n << endl;
	cout << (double)m / n << endl;
	cout << (double)z / n << endl;

	return 0;
}