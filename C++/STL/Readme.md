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
- find->second
```
auto it = mp.find(k);
key = it->first; // key값
value = it->second; // value값
```
- erase
```
map.erase(key); // key값을 갖는 map 삭제
```
# map와 hashmap의 차이
| map | hashmap |
| :------------------- | :------------------- |
| 자료 탐색에 hasing 사용 | 자료 탐색에 이진 탐색 트리 사용 |
|탐색 속도 O(1) 이상 (key값 분포에 따라 다름)  | 탐색 속도 O(log n) (일정)  |
| 내부 자료 정렬 X  | 내부 자료 정렬 O |
