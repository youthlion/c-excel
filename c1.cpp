#include<iostream>
#include<string>
using namespace std;

class People
{
private:
	string name;
	int idNum;
	string address;
	string sex;
public:
	People(string na,string se,int id,string ad)
	{
		name=na;
		sex=se;
		idNum=id;
		address=ad;
	}
	
}

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
