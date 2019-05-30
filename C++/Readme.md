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
- new와 delete
new, delete 연산자를 사용하여 프로그램에 단일 변수를 동적으로 할당, 해제할 수 있다 -> 할당이 해제된 메모리는 dangling pointer 라고 한다. 이것에 역참조 하지 않도록 주의!

참고 : https://boycoding.tistory.com/204
