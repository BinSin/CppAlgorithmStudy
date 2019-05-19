# vector
- push
```
#include <vector>
vecctor<int> v;
v.push_back(int); // int 형태를 v에 push
```
- sort
```
#include <algorithm>
sort(v.begin(), v.end()); // v를 처음부터 끝까지 정렬
```

# map
- put
```
#include <map>
map m<string, string>;
m[key] = value; // key와 value 값을 넣는다.
```
- find
```
if(m.find("hello") == m.end()) // key값에 hello가 없으면  m의 마지막 인덱스 번호 리턴
  cout << "Not found" << endl;
else
  cout << m["hello"] << endl;
```
