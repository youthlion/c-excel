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
			cout<<"输入班级："<<endl;
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
	cout<<"输入学生的人数："<<endl;
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
	cout<<"*******1.输入并保存  ********"<<endl;
	cout<<"*******2.排序        ********"<<endl;
	cout<<"*******3.修改        ********"<<endl;
	cout<<"*******4.删除        ********"<<endl;
	cout<<"*******5.查询        ********"<<endl;
	cout<<"选择要操作的操作数（1-6之间的整数）"<<endl;
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
	    	cout<<"输入错误，请重新输入。"<<endl;
	    	system("pause");
	    	contine;
		}
	}
	system("pause");
 } 
