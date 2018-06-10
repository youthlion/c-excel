#include<iostream>
#include<string>
#include<cmath>
using namespace std;

/*
第一题：类的组合 
class point
{
	private:
		int x,y;
	public:
		point(int xx,int yy)
		{
			x=xx;
			y=yy;
		}
		point()
		{
		}
		void setx(int value)
		{
			x=value;
		}
		int getx()
		{
			return x;
		}
		void sety(int value)
		{
			y=value;
		}
		int gety()
		{
			return y;
		}
};

class line:public point 
{
	private:
		point p1,p2;
	public:
		line(int px1,int px2,int py1,int py2):p1(px1,py1),p2(px2,py2)
		{
		}
		double getlength()
		{
			return sqrt((p1.getx()-p2.getx())*(p1.getx()-p2.getx())+(p1.gety()-p2.gety())*(p1.gety()-p2.gety()));
		}
		~line()
		{
		}
		
};

int main()
{
	line l(1,2,3,4);
	cout<<l.getlength()<<endl;
	return 0;
}
*/

class Student
{
	private:
		string name;
		int score;
	public:
		Student(string na,int sc)
		{
			name=na;
			score=sc;
		}
		Student(Student &s)
		{
			name=s.name;
			score=s.score;
		}
		~Student
		{
		}
};

void highestscore(student s[])
{
	
}

int main()
{
	Student s[N];
	
}

