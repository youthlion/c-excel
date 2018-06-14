#include<iostream>
#include<string>
#include<cmath>
using namespace std;

/*first problem
class point
{
	private:
		double x;
		double y;
	public:
		point(double xx,double yy)
		{
			x=xx;
			y=yy;
		}
		point(point &p)
		{
			x=p.x;
			y=p.y;
		}
		void setx(double value)
		{
			x=value;
		}
		void sety(double value)
		{
			y=value;
		}
		double getx()
		{
			return x;
		}
		double gety()
		{
			return y;
		}
		~point()
		{}
};

class line
{
	private:
		point p1;
		point p2;
	public:
		line(double a,double b,double c,double d):p1(a,b),p2(c,d)
		{}
		double getlength()
		{
			return sqrt((p1.getx()-p2.getx())*(p1.getx()-p2.getx())+(p1.gety()-p2.gety())*(p1.gety()-p2.gety()));
		}
		~line()
		{}
};

int main()
{
	line l(1,2,3,4);
	cout<<l.getlength()<<endl;
	return 0;
}

*/

/*   Second problem
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
	friend void highestscore(Student stu[]);
	~Student()
	{}
};



void highestscore(Student stu[])
{
	int high=stu[0].score;
	int n;
	for (int i=0;i<3;i++)
		if (high<stu[i].score)
		{
			high=stu[i].score;
			n=i;
		}
	cout<<"Highest score student is:"<<stu[n].name<<" score:"<<stu[n].score<<endl;
}


int main()
{
	Student stu[3]={Student("John",89),Student("Bob",78),Student("Jim",97)};
	highestscore(stu);
	return 0;
}
*/


/*  Third problem
class Book
{
private:
	string name;
	double price;
public:
	static double totalPrice;
	static double totalNum;
	Book(string na,double pr)
	{
		name=na;
		price=pr;
		totalNum++;
		totalPrice+=price;
	}
};

double Book::totalPrice=0;
double Book::totalNum=0;
int main()
{
	Book b1("math book",15.55),b2("Chinese book",16.4);
	cout<<"total book num:"<<b1.totalNum<<" total price:"<<b1.totalPrice<<endl;
	return 0;
}
*/



/* fourth problem

class point
{
private:
	int x;
	int y;
public:
	point()
	{
		x=0;
		y=0;
	}
	point(int xx,int yy)
	{
		x=xx;
		y=yy;
	}
	void setx(int value)
	{
		x=value;
	}
	void sety(int value)
	{
		y=value;
	}
	int getx()
	{
		return x;
	}
	int gety()
	{
		return y;
	}
};

int main()
{
	point *p;
	p=new point[10];
	delete p;
	return 0;
}

*/


/*   fifth problem
class point
{
private:
	double x;
	double y;
public:
	point()
	{
		x=0;
		y=0;
	}
	point(double xx,double yy)
	{
		x=xx;
		y=yy;
	}
	void set(double x1,double y1)
	{
		x=x1;
		y=y1;
	}
	double getx()
	{
		return x;
	}
	double gety()
	{
		return y;
	}
};

class circle:public point
{
private:
	double r;
public:
	circle()
	{
	}
	circle(double xx,double yy,double rr):point(xx,yy)
	{
		r=rr;
	}
	double getarea()
	{
		return 3.14*r*r;
	}
};

int main()
{
	circle c(1,2,3);
	cout<<c.getarea()<<endl;
	return 0;
}
*/


/* not finished sixth probelm
class vehicle
{
	private:
		double weight;
	public:
		vahicle(double we)
		{
			weight=we;
		}
		virtual void display()
		{
			cout<<"weight:"<<weight<<endl;
		}
		~vahicle()
		{}
};


class car:public vehicle
{
	private:
		int personnum;
	public:
		car(double we,int pe):vehicle(we)
		{
			personnum=pe;
		}
		void display()
		{
			cout<<"person num:"<<personnum<<endl;
		}
		~car()
		{}
};


class truck:public vehicle
{
	private:
		double load;
	public:
		truck(double we,double lo):vehicle(we)
		{
			load=lo;
		}
		void display()
		{
			cout<<"load:"<<load<<endl;
		}
		~truck()
		{}
};

class pickup:public car,public truck
{
	public:
		pickup(double we,int pe,double lo):car(we,pe),truck(we,lo)
		{}
		void display()
		{
			car::display();
			truck::display();
		}
};

int main()
{
	pickup p(1000,5,500);
	p.display();
	return 0;
}
*/

class complex
{
	private:
		int real;
		int image;
	public:
		complex(int re,int im)
		{
			real=re;
			image=im;
		}
		void display()
		{
			cout<<"real:"<<real<<" image:"<<image<<endl;
		}
		complex operator+(complex &c)
		{
			return complex((real+c.real),(image+c.image));
		}
		complex operator-(complex &c)
		{
			return complex((real-c.real),(image-c.image));
		}
		complex operator++()
		{
			return complex(real++,image++);
		}
		complex operator++(int i)
		{
			complex c=(*this);
			(*this)++;
			return c;
		}
		complex operator--()
		{
			real--;
			image--;
			return complex(real,image);
		}
		complex operator--(int i)
		{
			complex c=(*this);
			(*this)--;
			return c;
		}
};

int main()
{
	complex c(1,2);
	c.display();
	
	return 0;
}
	

		
		


