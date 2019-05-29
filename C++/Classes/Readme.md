# Class
자바와 비슷하지만 문법이 살짝 다르다.
```
class Student {
	private:
		int age;
		int standard;
		string first_name;
		string last_name;
	public:
		Student()
		{
			int age = 0;
			int standard = 0;
			string first_name;
			string last_name;
		}
		void set_age(int age)
		{
			this->age = age;
		}
		void set_standard(int standard)
		{
			this->standard = standard;
		}
		void set_first_name(string first_name)
		{
			this->first_name = first_name;
		}
		void set_last_name(string last_name)
		{
			this->last_name = last_name;
		}
		int get_age()
		{
			return age;
		}
		int get_standard()
		{
			return standard;
		}
		string get_first_name()
		{
			return first_name;
		}
		string get_last_name()
		{
			return last_name;
		}
		string to_string()
		{
			stringstream ss;
			ss << age << "," << first_name << "," << last_name << "," << standard;
			return ss.str();
		}
};
```
