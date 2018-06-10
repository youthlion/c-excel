#include<iostream>
#include<string>
using namespace std;

class Book
{
	private:
		string name;
		int price;
	public:
		Book(string na,int pr)
		{
			name=na;
			price=pr;
		}
		static int n;
		~Book
		{}
};

int Book::n=0;

int main()
{
	Book b("Math",1444,14);
}
