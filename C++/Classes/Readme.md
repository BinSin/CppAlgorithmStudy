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

# 연산자 오버로딩(operator overloading)
기존의 제공하고 있는 연산자를 재정의하여 사용자 정의 클래스로 사용하는 것
```
// << Box 클래스의 << 연산자에 대한 오버로딩 가능하게 함
ostream& operator << (ostream& out, const Box& B)
```

# try/catch
```
try {
			cout << Server::compute(A, B) << endl;
		}
		catch (bad_alloc & error) { // other standard C++ exception
			cout << "Not enough memory" << endl;
		}
		catch (exception & error) { // fails to allocate the memory
			cout << "Exception: " << error.what() << endl;
		}
		catch (...) {
			cout << "Other Exception" << endl;
		}
```

# virtual
- 가상 함수
가상 함수는 기본 클래스(상속되지 않은 클래스) 내에서 선언되어 파생 클래스에 의해 재정의되는 맴버 함수로 함수의 다형성(Polymorphism)을 구현하는데 사용

- 규칙
1. 클래스의 공개(public) 섹션에 선언합니다.
2. 가상 함수는 정적(static)일 수 없으며 다른 클래스의 친구(friend) 함수가 될 수도 없습니다.
3. 가상 함수는 실행시간 다형성을 얻기위해 기본 클래스의 포인터 또는 참조를 통해 접근(access)해야 합니다.
4. 가상 함수의 프로토타입(반환형과 매개변수)은 기본 클래스와 파생 클래스에서 동일합니다.
5. 클래스는 가상 소멸자를 가질 수 있지만 가상 생성자를 가질 수 없습니다.

출처: https://yeolco.tistory.com/125 [열코의 프로그래밍 일기]

# abstract
