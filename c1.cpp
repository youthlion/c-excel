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
		ostream &operator<<(ostream &os,People &p)
		{
			os<<"name:"<<p.name<<" num:"<<p.num<<" class num:"<<p.class_num<<endl;
			return os;
		}
		istream &operator>>(istream &is,People &p)
		{
			is>>p.name>>p.num>>p.class_num;
			return is;
		}
};



int main()
{
	People p;
	cout<<p<<endl;
}
