#include <iostream>
#include <math.h>
using namespace std;
int main() {
	int n;
	cin >> n;
	int dif = 0, in;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> in;
			if (i == j) dif += in;
			if (n - i - 1 == j) dif -= in;
		}
	}
	cout << abs(dif) << endl;
}