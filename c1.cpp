#include<iostream>
#include<string>
using namespace std;

class Student
{
private:
	int num;
	string name;
public:
	Student(int nu,string na)
	{
		num=nu;
		name=na;
	}
	void disp()
	{
		cout<<"name:"<<name<<"num:"<<num;
	}
};

int main()
{
	Student s(17,"zhang");
	s.disp();
	return 0;
}