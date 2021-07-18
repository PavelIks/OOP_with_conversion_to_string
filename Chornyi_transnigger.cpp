#include <string>
#include <iostream>

class User
{
public:
	User()
	{
		name = (char*)"Н1гг3р";
		surname = (char*)"Тч0рньій";
		age = 2;
	}
	User(char* _name, char* _surname, int _age)
	{
		name = _name;
		surname = _surname;
		age = _age;
	}

	std::string Convert_to_String()
	{
		std::string s = std::to_string(age);
		return s + "\n" + name + "\n" + surname + "\n";
	}

private:
	char* name;
	char* surname;
	int age;
};


int main()
{
	setlocale(LC_ALL, "Russian");

	User user((char*)"Н1гха", (char*)"0врихацкий", 1);
	std::cout << user.Convert_to_String();
}