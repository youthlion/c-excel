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

/*类的继承问题：
1.继承概念：派生类从基类继承，派生类具有基类的一些属性。
2.类的访问权限问题：有private，protected，public，如，在类中用private声明的函数或者属性，则这个函数或者属性是私有的，只能它自己内部访问，
当然你也可以定义有元函数，protected访问权限是自己本身和它的派生类，public的访问权限是类体和类外都可以。继承也有属性。如，私有继承一个类，
那么，派生类中的函数和属性将继承基类的protected，public中声明的函数和属性，这些继承来的函数和属性都作为派生类的私有成员。 

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

*/
