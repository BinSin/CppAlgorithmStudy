# string
- length
```cpp
string.length(); // string 길이 리턴
```
- substr
```cpp
string.substr(2); // 0, 1번째 지우고 2번째부터 리턴
string.substr(2, 5); // 2~5 번째 리턴
```
- find
```cpp
string.find("abc"); // abc가 있는 위치 찾기, 없으면 string:npos 리턴
```

# stringstream
```cpp
#include <sstream> // stringstream 사용
string str = "abc def ghi";
stringstream ss(str); // 띄어쓰기 제거하고 string 형태만 저장
string s;
while (ss >> s) {
  cout << s << endl; // abc, def, ghi 출력
}
```
