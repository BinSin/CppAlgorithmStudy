#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

vector<int> parseInts(string str) {
	int num;
	char ch;
	vector<int> v;
	stringstream ss(str);
	while (ss >> num) {
		v.push_back(num);
		ss >> ch;
	}
	ss.clear();
	return v;
}

int main() {
	string str;
	int num;
	cin >> str;
	vector<int> integers = parseInts(str);
	for (int i = 0; i < integers.size(); i++) {
		cout << integers[i] << "\n";
	}
	
	return 0;
}