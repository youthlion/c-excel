#include<iostream>
#include<string>

using namespace std;

class student
{
	private:
		string name;
		string sex;
		long num;
		long class_num;
		long phone_num;
	public:
		student(string na,string se,long nu,long cl,long ph)
		{
			name=na;
			sex=se;
			num=nu;
			class_num=cl;
			phone_num=ph;
			total_num++;
		}
		friend int classNum(student s[])
		{
			int n=student::total_num;
			long cl;
			int cl_num=0;
			cout<<"����༶��"<<endl;
			cin>>cl;
			for (int i=0;i<n;i++)
			    if (cl==s[i].class_num)
			        cl_num++;
			return cl_num;
		}
		friend void sort(student s[])
		{
			int n=student::total_num;
			int i,j;
			student temp;
			for (j=0;j<n-1;j++)
		        for (i=0;i<n-1-j;i++)
		            if (s[i].num<s[i+1].num)
		                {
		                	temp=s[i];
		                	s[i]=s[i+1];
		                	s[i+1]=temp;
						}
		    for (int i=0;i<n;i++)
		    {
		    	cout<<s[i]<<endl;
			}
		}
		friend void in_and_save();
		friend ostream& operator>>(ostream &os,student &s)
		{
			os>>s.name>>s.sex>>s.num>>s.class_num>>s.phone_num;
			return os;
		}
		static int total_num;
		~student()
		{}	
};

int student::total_num=0;

void studemt::in_and_save()
{
	int n;
	cout<<"����ѧ����������"<<endl;
	cin>>n;
	for (int i=0;i<n;i++)
	{
		string na,se;
		long nu,cl,ph;
		
	}
}

int main()
{
	while(1)
	{
	int select;
	cout<<"*****************************"<<endl;
	cout<<"*******1.���벢����  ********"<<endl;
	cout<<"*******2.����        ********"<<endl;
	cout<<"*******3.�޸�        ********"<<endl;
	cout<<"*******4.ɾ��        ********"<<endl;
	cout<<"*******5.��ѯ        ********"<<endl;
	cout<<"ѡ��Ҫ�����Ĳ�������1-6֮���������"<<endl;
	cin>>select;
	if (select==1)
	    {
	    	in_and_save(); 
		}
	else if (select==2)
	    {
	    	sort();
		}
	else if (select==3)
	    {
	    	change();
		}
	else if (select==4)
	    {
	    	dele();
		}
	else if (select==5)
	    {
	    	query();
		}
	else
	    {
	    	cout<<"����������������롣"<<endl;
	    	system("pause");
	    	contine;
		}
	}
	system("pause");
 } 
