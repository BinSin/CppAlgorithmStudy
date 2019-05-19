#include <iostream>
#include <map>
#include <sstream>
#include <vector>
using namespace std;

int main() {
	int N, Q;
	cin >> N >> Q;
	cin.ignore(); // 버퍼 제거

	map<string, string> map;
	string tag_name = "";
	for (int i = 0; i < N; i++) {
		string query;
		getline(cin, query);

		stringstream ss(query);
		string word, attribute, value;

		while (getline(ss, word, ' ')) {
			if (word[0] == '<') { // tag
				string tag;
				if (word[1] != '/') { // open tag
					tag = word.substr(1);
					if (tag.find(">") != string::npos) // 못 찾으면 string::npos 반환
						tag = tag.substr(0, tag.length() - 1);
					if (tag_name == "")
						tag_name = tag;
					else
						tag_name = tag_name + "." + tag;
				}
				else { // close tag
					tag = word.substr(2);
					tag = tag.substr(0, tag.length() - 1);
					int pos = tag_name.find("." + tag);
					if (pos == string::npos)
						tag_name = "";
					else
						tag_name = tag_name.substr(0, pos);
				}
			}
			else if (word[0] == '"') { // value
				int pos = word.find_last_of('"');
				value = word.substr(1, pos - 1);
				map[attribute] = value;    // insert into map
			}
			else if (word[0] != '=') { // attribute
				attribute = tag_name + "~" + word;
			}
		}
	}

	for (int i = 0; i < Q; i++) {
		string in;
		getline(cin, in);
		if (map.find(in) == map.end())
			cout << "Not Found!" << endl;
		else
			cout << map[in] << endl;
	}

	return 0;
}
