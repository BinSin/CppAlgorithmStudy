# Class
자바와 비슷하지만 문법이 살짝 다르다.
```
class Student {
	private:
		int age;
	public:
		Student()
		{
			int age = 0;
		}
		void set_age(int age)
		{
			this->age = age;
		}
		int get_age()
		{
			return age;
		}
};
```
이런 식으로도 가능하다.
```
  Box() : l(0), b(0), h(0) {};
	Box(int l, int b, int h) : l(l), b(b), h(h) {};
	Box(Box& B) :l(B.l), b(B.b), h(B.h) {};
```

# friend
firend 클래스는 friend로 선언된 다른 클래스의 private 및 protected 멤버에 접근할 수 있다.

# 연산자 오버로딩
기존의 제공하고 있는 연산자를 재정의하여 사용자 정의 클래스로 사용하는 것
```
// << Box 클래스의 << 연산자에 대한 오버로딩 가능하게 함
ostream& operator << (ostream& out, const Box& B)
```
