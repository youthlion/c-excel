#include<iostream>
#include<string>
using namespace std;

/*类的定义和使用 
class Student
{
	private:
		string name;
		int num;
	public:
		void setname(string na)
		{
			name=na;
		}
		string getname()
		{
			return name;
		}
		void setnum(int nu)
		{
			num=nu;
		}
		int getnum()
		{
			return num;
		}
	    void printinfo()
	    {
	    	cout<<"name:"<<name<<" num:"<<num;
		}
};


int main()
{
	Student stu;
	string na;
	int nu;
	cout<<"please input name:"<<endl;
	cin>>na;
	cout<<"please input num:"<<endl;
	cin>>nu;
	stu.setname(na);
	stu.setnum(nu);
	stu.printinfo();
}
*/

class Circle
{
	private:
		int r;
	public:
		void setr(int rr)
		{
			r=rr;
		}
		int getr()
		{
			return r;
		}
		int area()
		{
			return 3.14*r*r;
		}
		int perimeter()
		{
			return 3.14*2*r;
		}
};

int main()
{
	Circle c;
	int rr;
	cout<<"please input r:"<<endl;
	cin>>rr;
	c.setr(rr);
	cout<<"r:"<<c.getr()<<endl;
	cout<<"area:"<<c.area()<<" perimeter:"<<c.perimeter()<<endl;
	return 0;
}
