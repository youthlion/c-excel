#include<iostream>
#include<string>
using namespace std;

/*
1.��Ķ��巽�������췽�������캯�������޲ι��죬���������죬�޲����ں��������Լ������ֵ���вΣ���ֵ���ݸ������塣�������죬�����еĶ����
ֵ�������캯����
2.��ĺ��������Ե�Ȩ�����⣬��ľ�̬��������ĳ��� 

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

/*��ļ̳����⣺
1.�̳и��������ӻ���̳У���������л����һЩ���ԡ�
2.��ķ���Ȩ�����⣺��private��protected��public���磬��������private�����ĺ����������ԣ��������������������˽�еģ�ֻ�����Լ��ڲ����ʣ�
��Ȼ��Ҳ���Զ�����Ԫ������protected����Ȩ�����Լ���������������࣬public�ķ���Ȩ������������ⶼ���ԡ��̳�Ҳ�����ԡ��磬˽�м̳�һ���࣬
��ô���������еĺ��������Խ��̳л����protected��public�������ĺ��������ԣ���Щ�̳����ĺ��������Զ���Ϊ�������˽�г�Ա����protected�̳�
һ���࣬��ô�����������public��protected�������ĺ��������ԣ���Ϊ �������protected�еĺ��������ԡ�
3.�ڻ����ж���Ĺ��캯�����������н��и�ֵ���������ʽ���á� 
4.�ڻ����д��ڵĺ������������������������ʱ���õ����������еĺ����� 

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


template <typename T>
T function(T a,T b)
{
	
}



 
