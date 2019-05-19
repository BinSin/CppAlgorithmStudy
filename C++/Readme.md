# 중요
- cin과 getline
```
int n;
cin >> n;
cin.ignore(); // 남아있는 버퍼를 제거하지 않으면 getline 할 때 공백(\0)을 str 에 넣는다.
```
- getline 활용
```
string str;
stringstream ss(str);
getline(cin, query);
string word;
while(getline(ss, word, ' ')) {
  // 이런식으로 string 형태를 word에 담아 사용 가능
}
