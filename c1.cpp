#include<iostream>
#include<string>
using namespace std;

class People
{
	private:
		string name;
		int num;
		int class_num;
	public:
		People()
		{
			name="Tom";
			num=0;
			class_num=0;
		}
		People(string na,int nu,int cl)
		{
			name=na;
			num=nu;
			class_num=cl;
		}
		People(People &p)
		{
			name=p.name;
			num=p.num;
			class_num=p.class_num;
		}
		void disp()
		{
			cout<<"name:"<<name<<" num:"<<num<<" class num:"<<class_num<<endl;
		}
};

int main()
{
	People p;
	p.disp();
	People a("John",1,1);
	a.disp();
	return 0;
}
