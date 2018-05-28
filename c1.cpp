#include<iostream>
#include<string>
using namespace std;

/*
class People
{
	private:
		string name;
		int num;
		int id_num;
	public:
		People()
		{
			name="Tom";
			num=0;
			id_num=0;
		}
		People(string na,int nu,int id)
		{
			name=na;
			num=nu;
			id_num=cl;
		}
		People(People &p)
		{
			name=p.name;
			num=p.num;
			id_num=p.id_num;
		}
		string get_name()
		{
			return name;
		}
		int get_num()
		{
			return num;
		}
		int get_id()
		{
			return id_num;
		}
		void disp()
		{
			cout<<"name:"<<name<<" num:"<<num<<" id num:"<<id_num<<endl;
		}
		friend ostream &operator<<(ostream &os,People &p)
		{
			os<<"name:"<<p.name<<" num:"<<p.num<<" id num:"<<p.id_num<<endl;
			return os;
		}
		friend istream &operator>>(istream &is,People &p)
		{
			is>>p.name>>p.num>>p.class_num;
			return is;
		}
};

class Student:public People
{
	private:
		
 } 



int main()
{
	People p;
	cout<<p<<endl;
}
*/


class Animal
{
	private:
		string name;
		int num;
		string f_food;
	public:
		Animal(string na,int nu,string f)
		{
			name=na;
			num=nu;
			f_food=f;
		}
		string get_name()
		{
			return name;
		}
		int get_num()
		{
			return num;
		}
		void sound()
		{
			cout<<"animal sound!"<<endl;
		}
		
};

class Dog:public Animal
{
	private:
		int high;
	public:
        Dog(string na,int nu,string f,int h):Animal(na,nu,f)
		{
			high=h;
		}
		void disp()
		{
			cout<<"name:"<<Animal::get_name()<<" num:"<<Animal::get_num()<<endl;
		}
		void sound()
		{
			cout<<"wang wang~"<<endl;
		}
};


int main()
{
	Animal a("wu",14,"banana");
	a.sound();
	Dog d("ha",1,"gu",50);
	d.sound();
	return 0;
}
